/* winbase.h

   Copyright 2002, 2003, 2004, 2008, 2009, 2012 Red Hat, Inc.

This software is a copyrighted work licensed under the terms of the
Cygwin license.  Please consult the file "CYGWIN_LICENSE" for
details. */

#include_next "winbase.h"

#ifndef _WINBASE2_H
#define _WINBASE2_H

/* For some unknown reason, InterlockedAdd is only supported on Itanium
   when using the Windows headers.  Fortunately we're not restricted to the
   Windows headers :) */
extern __inline__ LONG
ilockadd (volatile LONG *m, LONG value)
{
  register LONG __res;
  __asm__ __volatile__ ("\n\
	movl	%3,%0\n\
	lock	xadd %0,%1\n\
	addl	%3,%0\n\
	": "=&r" (__res), "=m" (*m): "m" (*m), "r" (value): "cc");
  return __res;
}

extern __inline__ LONG
ilockincr (volatile LONG *m)
{
  register LONG __res;
  __asm__ __volatile__ ("\n\
	movl	$1,%0\n\
	lock	xadd %0,%1\n\
	inc	%0\n\
	": "=&r" (__res), "=m" (*m): "m" (*m): "cc");
  return __res;
}

extern __inline__ LONG
ilockdecr (volatile LONG *m)
{
  register LONG __res;
  __asm__ __volatile__ ("\n\
	movl	$0xffffffff,%0\n\
	lock	xadd %0,%1\n\
	dec	%0\n\
	": "=&r" (__res), "=m" (*m): "m" (*m): "cc");
  return __res;
}

extern __inline__ LONG
ilockexch (volatile LONG *t, long v)
{
  return
  ({
    register LONG ret __asm ("%eax");
    __asm __volatile ("\n"
	"1:	lock cmpxchgl %2, %1\n"
	"	jne  1b\n"
	: "=a" (ret), "=m" (*t)
	: "r" (v), "m" (*t), "0" (*t)
	: "memory");
    ret;
  });
}

extern __inline__ LONG
ilockcmpexch (volatile LONG *t, LONG v, LONG c)
{
  return
  ({
    register LONG ret __asm ("%eax");
    __asm __volatile ("lock cmpxchgl %2, %1"
	: "=a" (ret), "=m" (*t)
	: "r" (v), "m" (*t), "0" (c)
	: "memory");
    ret;
  });
}

#undef InterlockedAdd
#define InterlockedAdd ilockadd
#undef InterlockedIncrement
#define InterlockedIncrement ilockincr
#undef InterlockedDecrement
#define InterlockedDecrement ilockdecr
#undef InterlockedExchange
#define InterlockedExchange ilockexch
#undef InterlockedCompareExchange
#define InterlockedCompareExchange ilockcmpexch
#undef InterlockedCompareExchangePointer
#ifndef __x86_64
#define InterlockedCompareExchangePointer(d,e,c) \
    (PVOID)InterlockedCompareExchange((LONG volatile *)(d),(LONG)(e),(LONG)(c))
#endif /* !__x86_64 */
#endif /*_WINBASE2_H*/
