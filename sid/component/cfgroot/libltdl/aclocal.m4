dnl aclocal.m4 generated automatically by aclocal 1.4

dnl Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY, to the extent permitted by law; without
dnl even the implied warranty of MERCHANTABILITY or FITNESS FOR A
dnl PARTICULAR PURPOSE.


# serial 39 AC_PROG_LIBTOOL
AC_DEFUN(AC_PROG_LIBTOOL,
[AC_REQUIRE([AC_LIBTOOL_SETUP])dnl

# Save cache, so that ltconfig can load it
AC_CACHE_SAVE
AC_CHECK_TOOL(AR, ar)

# Actually configure libtool.  ac_aux_dir is where install-sh is found.
AR="$AR" CC="$CC" CFLAGS="$CFLAGS" CPPFLAGS="$CPPFLAGS" \
LD="$LD" LDFLAGS="$LDFLAGS" LIBS="$LIBS" \
LN_S="$LN_S" NM="$NM" RANLIB="$RANLIB" \
DLLTOOL="$DLLTOOL" AS="$AS" OBJDUMP="$OBJDUMP" \
${CONFIG_SHELL-/bin/sh} $ac_aux_dir/ltconfig --no-reexec \
$libtool_flags --no-verify $ac_aux_dir/ltmain.sh $host \
|| AC_MSG_ERROR([libtool configure failed])

# Reload cache, that may have been modified by ltconfig
AC_CACHE_LOAD

# This can be used to rebuild libtool when needed
LIBTOOL_DEPS="$ac_aux_dir/ltconfig $ac_aux_dir/ltmain.sh"

# Always use our own libtool.
LIBTOOL='$(SHELL) $(top_builddir)/libtool'
AC_SUBST(LIBTOOL)dnl

# Redirect the config.log output again, so that the ltconfig log is not
# clobbered by the next message.
exec 5>>./config.log
])

AC_DEFUN(AC_LIBTOOL_SETUP,
[AC_PREREQ(2.13)dnl
AC_REQUIRE([AC_ENABLE_SHARED])dnl
AC_REQUIRE([AC_ENABLE_STATIC])dnl
AC_REQUIRE([AC_ENABLE_FAST_INSTALL])dnl
AC_REQUIRE([AC_CANONICAL_HOST])dnl
AC_REQUIRE([AC_CANONICAL_BUILD])dnl
AC_REQUIRE([AC_PROG_RANLIB])dnl
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([AC_PROG_LD])dnl
AC_REQUIRE([AC_PROG_NM])dnl
AC_REQUIRE([AC_PROG_LN_S])dnl
dnl

# Check for any special flags to pass to ltconfig.
libtool_flags="--cache-file=$cache_file"
test "$enable_shared" = no && libtool_flags="$libtool_flags --disable-shared"
test "$enable_static" = no && libtool_flags="$libtool_flags --disable-static"
test "$enable_fast_install" = no && libtool_flags="$libtool_flags --disable-fast-install"
test "$ac_cv_prog_gcc" = yes && libtool_flags="$libtool_flags --with-gcc"
test "$ac_cv_prog_gnu_ld" = yes && libtool_flags="$libtool_flags --with-gnu-ld"
ifdef([AC_PROVIDE_AC_LIBTOOL_DLOPEN],
[libtool_flags="$libtool_flags --enable-dlopen"])
ifdef([AC_PROVIDE_AC_LIBTOOL_WIN32_DLL],
[libtool_flags="$libtool_flags --enable-win32-dll"])
AC_ARG_ENABLE(libtool-lock,
  [  --disable-libtool-lock  avoid locking (might break parallel builds)])
test "x$enable_libtool_lock" = xno && libtool_flags="$libtool_flags --disable-lock"
test x"$silent" = xyes && libtool_flags="$libtool_flags --silent"

# Some flags need to be propagated to the compiler or linker for good
# libtool support.
case "$host" in
*-*-irix6*)
  # Find out which ABI we are using.
  echo '[#]line __oline__ "configure"' > conftest.$ac_ext
  if AC_TRY_EVAL(ac_compile); then
    case "`/usr/bin/file conftest.o`" in
    *32-bit*)
      LD="${LD-ld} -32"
      ;;
    *N32*)
      LD="${LD-ld} -n32"
      ;;
    *64-bit*)
      LD="${LD-ld} -64"
      ;;
    esac
  fi
  rm -rf conftest*
  ;;

*-*-sco3.2v5*)
  # On SCO OpenServer 5, we need -belf to get full-featured binaries.
  SAVE_CFLAGS="$CFLAGS"
  CFLAGS="$CFLAGS -belf"
  AC_CACHE_CHECK([whether the C compiler needs -belf], lt_cv_cc_needs_belf,
    [AC_TRY_LINK([],[],[lt_cv_cc_needs_belf=yes],[lt_cv_cc_needs_belf=no])])
  if test x"$lt_cv_cc_needs_belf" != x"yes"; then
    # this is probably gcc 2.8.0, egcs 1.0 or newer; no need for -belf
    CFLAGS="$SAVE_CFLAGS"
  fi
  ;;

ifdef([AC_PROVIDE_AC_LIBTOOL_WIN32_DLL],
[*-*-cygwin* | *-*-mingw*)
  AC_CHECK_TOOL(DLLTOOL, dlltool, false)
  AC_CHECK_TOOL(AS, as, false)
  AC_CHECK_TOOL(OBJDUMP, objdump, false)
  ;;
])
esac
])

# AC_LIBTOOL_DLOPEN - enable checks for dlopen support
AC_DEFUN(AC_LIBTOOL_DLOPEN, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])])

# AC_LIBTOOL_WIN32_DLL - declare package support for building win32 dll's
AC_DEFUN(AC_LIBTOOL_WIN32_DLL, [AC_BEFORE([$0], [AC_LIBTOOL_SETUP])])

# AC_ENABLE_SHARED - implement the --enable-shared flag
# Usage: AC_ENABLE_SHARED[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_SHARED, [dnl
define([AC_ENABLE_SHARED_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(shared,
changequote(<<, >>)dnl
<<  --enable-shared[=PKGS]  build shared libraries [default=>>AC_ENABLE_SHARED_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_shared=yes ;;
no) enable_shared=no ;;
*)
  enable_shared=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_shared=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_shared=AC_ENABLE_SHARED_DEFAULT)dnl
])

# AC_DISABLE_SHARED - set the default shared flag to --disable-shared
AC_DEFUN(AC_DISABLE_SHARED, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_SHARED(no)])

# AC_ENABLE_STATIC - implement the --enable-static flag
# Usage: AC_ENABLE_STATIC[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_STATIC, [dnl
define([AC_ENABLE_STATIC_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(static,
changequote(<<, >>)dnl
<<  --enable-static[=PKGS]  build static libraries [default=>>AC_ENABLE_STATIC_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_static=yes ;;
no) enable_static=no ;;
*)
  enable_static=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_static=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_static=AC_ENABLE_STATIC_DEFAULT)dnl
])

# AC_DISABLE_STATIC - set the default static flag to --disable-static
AC_DEFUN(AC_DISABLE_STATIC, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_STATIC(no)])


# AC_ENABLE_FAST_INSTALL - implement the --enable-fast-install flag
# Usage: AC_ENABLE_FAST_INSTALL[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_FAST_INSTALL, [dnl
define([AC_ENABLE_FAST_INSTALL_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(fast-install,
changequote(<<, >>)dnl
<<  --enable-fast-install[=PKGS]  optimize for fast installation [default=>>AC_ENABLE_FAST_INSTALL_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_fast_install=yes ;;
no) enable_fast_install=no ;;
*)
  enable_fast_install=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_fast_install=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_fast_install=AC_ENABLE_FAST_INSTALL_DEFAULT)dnl
])

# AC_ENABLE_FAST_INSTALL - set the default to --disable-fast-install
AC_DEFUN(AC_DISABLE_FAST_INSTALL, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_FAST_INSTALL(no)])

# AC_PROG_LD - find the path to the GNU or non-GNU linker
AC_DEFUN(AC_PROG_LD,
[AC_ARG_WITH(gnu-ld,
[  --with-gnu-ld           assume the C compiler uses GNU ld [default=no]],
test "$withval" = no || with_gnu_ld=yes, with_gnu_ld=no)
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([AC_CANONICAL_HOST])dnl
AC_REQUIRE([AC_CANONICAL_BUILD])dnl
ac_prog=ld
if test "$ac_cv_prog_gcc" = yes; then
  # Check if gcc -print-prog-name=ld gives a path.
  AC_MSG_CHECKING([for ld used by GCC])
  ac_prog=`($CC -print-prog-name=ld) 2>&5`
  case "$ac_prog" in
    # Accept absolute paths.
changequote(,)dnl
    [\\/]* | [A-Za-z]:[\\/]*)
      re_direlt='/[^/][^/]*/\.\./'
changequote([,])dnl
      # Canonicalize the path of ld
      ac_prog=`echo $ac_prog| sed 's%\\\\%/%g'`
      while echo $ac_prog | grep "$re_direlt" > /dev/null 2>&1; do
	ac_prog=`echo $ac_prog| sed "s%$re_direlt%/%"`
      done
      test -z "$LD" && LD="$ac_prog"
      ;;
  "")
    # If it fails, then pretend we aren't using GCC.
    ac_prog=ld
    ;;
  *)
    # If it is relative, then search for the first ld in PATH.
    with_gnu_ld=unknown
    ;;
  esac
elif test "$with_gnu_ld" = yes; then
  AC_MSG_CHECKING([for GNU ld])
else
  AC_MSG_CHECKING([for non-GNU ld])
fi
AC_CACHE_VAL(ac_cv_path_LD,
[if test -z "$LD"; then
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}${PATH_SEPARATOR-:}"
  for ac_dir in $PATH; do
    test -z "$ac_dir" && ac_dir=.
    if test -f "$ac_dir/$ac_prog" || test -f "$ac_dir/$ac_prog$ac_exeext"; then
      ac_cv_path_LD="$ac_dir/$ac_prog"
      # Check to see if the program is GNU ld.  I'd rather use --version,
      # but apparently some GNU ld's only accept -v.
      # Break only if it was the GNU/non-GNU ld that we prefer.
      if "$ac_cv_path_LD" -v 2>&1 < /dev/null | egrep '(GNU|with BFD)' > /dev/null; then
	test "$with_gnu_ld" != no && break
      else
	test "$with_gnu_ld" != yes && break
      fi
    fi
  done
  IFS="$ac_save_ifs"
else
  ac_cv_path_LD="$LD" # Let the user override the test with a path.
fi])
LD="$ac_cv_path_LD"
if test -n "$LD"; then
  AC_MSG_RESULT($LD)
else
  AC_MSG_RESULT(no)
fi
test -z "$LD" && AC_MSG_ERROR([no acceptable ld found in \$PATH])
AC_SUBST(LD)
AC_PROG_LD_GNU
])

AC_DEFUN(AC_PROG_LD_GNU,
[AC_CACHE_CHECK([if the linker ($LD) is GNU ld], ac_cv_prog_gnu_ld,
[# I'd rather use --version here, but apparently some GNU ld's only accept -v.
if $LD -v 2>&1 </dev/null | egrep '(GNU|with BFD)' 1>&5; then
  ac_cv_prog_gnu_ld=yes
else
  ac_cv_prog_gnu_ld=no
fi])
])

# AC_PROG_NM - find the path to a BSD-compatible name lister
AC_DEFUN(AC_PROG_NM,
[AC_MSG_CHECKING([for BSD-compatible nm])
AC_CACHE_VAL(ac_cv_path_NM,
[if test -n "$NM"; then
  # Let the user override the test.
  ac_cv_path_NM="$NM"
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}${PATH_SEPARATOR-:}"
  for ac_dir in $PATH /usr/ccs/bin /usr/ucb /bin; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/nm || test -f $ac_dir/nm$ac_exeext ; then
      # Check to see if the nm accepts a BSD-compat flag.
      # Adding the `sed 1q' prevents false positives on HP-UX, which says:
      #   nm: unknown option "B" ignored
      if ($ac_dir/nm -B /dev/null 2>&1 | sed '1q'; exit 0) | egrep /dev/null >/dev/null; then
	ac_cv_path_NM="$ac_dir/nm -B"
	break
      elif ($ac_dir/nm -p /dev/null 2>&1 | sed '1q'; exit 0) | egrep /dev/null >/dev/null; then
	ac_cv_path_NM="$ac_dir/nm -p"
	break
      else
	ac_cv_path_NM=${ac_cv_path_NM="$ac_dir/nm"} # keep the first match, but
	continue # so that we can try to find one that supports BSD flags
      fi
    fi
  done
  IFS="$ac_save_ifs"
  test -z "$ac_cv_path_NM" && ac_cv_path_NM=nm
fi])
NM="$ac_cv_path_NM"
AC_MSG_RESULT([$NM])
AC_SUBST(NM)
])

# AC_CHECK_LIBM - check for math library
AC_DEFUN(AC_CHECK_LIBM,
[AC_REQUIRE([AC_CANONICAL_HOST])dnl
LIBM=
case "$host" in
*-*-beos* | *-*-cygwin*)
  # These system don't have libm
  ;;
*-ncr-sysv4.3*)
  AC_CHECK_LIB(mw, _mwvalidcheckl, LIBM="-lmw")
  AC_CHECK_LIB(m, main, LIBM="$LIBM -lm")
  ;;
*)
  AC_CHECK_LIB(m, main, LIBM="-lm")
  ;;
esac
])

# AC_LIBLTDL_CONVENIENCE[(dir)] - sets LIBLTDL to the link flags for
# the libltdl convenience library, adds --enable-ltdl-convenience to
# the configure arguments.  Note that LIBLTDL is not AC_SUBSTed, nor
# is AC_CONFIG_SUBDIRS called.  If DIR is not provided, it is assumed
# to be `${top_builddir}/libltdl'.  Make sure you start DIR with
# '${top_builddir}/' (note the single quotes!) if your package is not
# flat, and, if you're not using automake, define top_builddir as
# appropriate in the Makefiles.
AC_DEFUN(AC_LIBLTDL_CONVENIENCE, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
  case "$enable_ltdl_convenience" in
  no) AC_MSG_ERROR([this package needs a convenience libltdl]) ;;
  "") enable_ltdl_convenience=yes
      ac_configure_args="$ac_configure_args --enable-ltdl-convenience" ;;
  esac
  LIBLTDL=ifelse($#,1,$1,['${top_builddir}/libltdl'])/libltdlc.la
])

# AC_LIBLTDL_INSTALLABLE[(dir)] - sets LIBLTDL to the link flags for
# the libltdl installable library, and adds --enable-ltdl-install to
# the configure arguments.  Note that LIBLTDL is not AC_SUBSTed, nor
# is AC_CONFIG_SUBDIRS called.  If DIR is not provided, it is assumed
# to be `${top_builddir}/libltdl'.  Make sure you start DIR with
# '${top_builddir}/' (note the single quotes!) if your package is not
# flat, and, if you're not using automake, define top_builddir as
# appropriate in the Makefiles.
# In the future, this macro may have to be called after AC_PROG_LIBTOOL.
AC_DEFUN(AC_LIBLTDL_INSTALLABLE, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
  AC_CHECK_LIB(ltdl, main,
  [test x"$enable_ltdl_install" != xyes && enable_ltdl_install=no],
  [if test x"$enable_ltdl_install" = xno; then
     AC_MSG_WARN([libltdl not installed, but installation disabled])
   else
     enable_ltdl_install=yes
   fi
  ])
  if test x"$enable_ltdl_install" = x"yes"; then
    ac_configure_args="$ac_configure_args --enable-ltdl-install"
    LIBLTDL=ifelse($#,1,$1,['${top_builddir}/libltdl'])/libltdl.la
  else
    ac_configure_args="$ac_configure_args --enable-ltdl-install=no"
    LIBLTDL="-lltdl"
  fi
])

dnl old names
AC_DEFUN(AM_PROG_LIBTOOL, [indir([AC_PROG_LIBTOOL])])dnl
AC_DEFUN(AM_ENABLE_SHARED, [indir([AC_ENABLE_SHARED], $@)])dnl
AC_DEFUN(AM_ENABLE_STATIC, [indir([AC_ENABLE_STATIC], $@)])dnl
AC_DEFUN(AM_DISABLE_SHARED, [indir([AC_DISABLE_SHARED], $@)])dnl
AC_DEFUN(AM_DISABLE_STATIC, [indir([AC_DISABLE_STATIC], $@)])dnl
AC_DEFUN(AM_PROG_LD, [indir([AC_PROG_LD])])dnl
AC_DEFUN(AM_PROG_NM, [indir([AC_PROG_NM])])dnl

dnl This is just to quiet aclocal about the macro not being used
dnl if(a,b,[AC_DISABLE_FAST_INSTALL])dnl

# Do all the work for Automake.  This macro actually does too much --
# some checks are only needed if your package does certain things.
# But this isn't really a big deal.

# serial 1

dnl Usage:
dnl AM_INIT_AUTOMAKE(package,version, [no-define])

AC_DEFUN(AM_INIT_AUTOMAKE,
[AC_REQUIRE([AC_PROG_INSTALL])
PACKAGE=[$1]
AC_SUBST(PACKAGE)
VERSION=[$2]
AC_SUBST(VERSION)
dnl test to see if srcdir already configured
if test "`cd $srcdir && pwd`" != "`pwd`" && test -f $srcdir/config.status; then
  AC_MSG_ERROR([source directory already configured; run "make distclean" there first])
fi
ifelse([$3],,
AC_DEFINE_UNQUOTED(PACKAGE, "$PACKAGE", [Name of package])
AC_DEFINE_UNQUOTED(VERSION, "$VERSION", [Version number of package]))
AC_REQUIRE([AM_SANITY_CHECK])
AC_REQUIRE([AC_ARG_PROGRAM])
dnl FIXME This is truly gross.
missing_dir=`cd $ac_aux_dir && pwd`
AM_MISSING_PROG(ACLOCAL, aclocal, $missing_dir)
AM_MISSING_PROG(AUTOCONF, autoconf, $missing_dir)
AM_MISSING_PROG(AUTOMAKE, automake, $missing_dir)
AM_MISSING_PROG(AUTOHEADER, autoheader, $missing_dir)
AM_MISSING_PROG(MAKEINFO, makeinfo, $missing_dir)
AC_REQUIRE([AC_PROG_MAKE_SET])])

#
# Check to make sure that the build environment is sane.
#

AC_DEFUN(AM_SANITY_CHECK,
[AC_MSG_CHECKING([whether build environment is sane])
# Just in case
sleep 1
echo timestamp > conftestfile
# Do `set' in a subshell so we don't clobber the current shell's
# arguments.  Must try -L first in case configure is actually a
# symlink; some systems play weird games with the mod time of symlinks
# (eg FreeBSD returns the mod time of the symlink's containing
# directory).
if (
   set X `ls -Lt $srcdir/configure conftestfile 2> /dev/null`
   if test "[$]*" = "X"; then
      # -L didn't work.
      set X `ls -t $srcdir/configure conftestfile`
   fi
   if test "[$]*" != "X $srcdir/configure conftestfile" \
      && test "[$]*" != "X conftestfile $srcdir/configure"; then

      # If neither matched, then we have a broken ls.  This can happen
      # if, for instance, CONFIG_SHELL is bash and it inherits a
      # broken ls alias from the environment.  This has actually
      # happened.  Such a system could not be considered "sane".
      AC_MSG_ERROR([ls -t appears to fail.  Make sure there is not a broken
alias in your environment])
   fi

   test "[$]2" = conftestfile
   )
then
   # Ok.
   :
else
   AC_MSG_ERROR([newly created file is older than distributed files!
Check your system clock])
fi
rm -f conftest*
AC_MSG_RESULT(yes)])

dnl AM_MISSING_PROG(NAME, PROGRAM, DIRECTORY)
dnl The program must properly implement --version.
AC_DEFUN(AM_MISSING_PROG,
[AC_MSG_CHECKING(for working $2)
# Run test in a subshell; some versions of sh will print an error if
# an executable is not found, even if stderr is redirected.
# Redirect stdin to placate older versions of autoconf.  Sigh.
if ($2 --version) < /dev/null > /dev/null 2>&1; then
   $1=$2
   AC_MSG_RESULT(found)
else
   $1="$3/missing $2"
   AC_MSG_RESULT(missing)
fi
AC_SUBST($1)])

# Like AC_CONFIG_HEADER, but automatically create stamp file.

AC_DEFUN(AM_CONFIG_HEADER,
[AC_PREREQ([2.12])
AC_CONFIG_HEADER([$1])
dnl When config.status generates a header, we must update the stamp-h file.
dnl This file resides in the same directory as the config header
dnl that is generated.  We must strip everything past the first ":",
dnl and everything past the last "/".
AC_OUTPUT_COMMANDS(changequote(<<,>>)dnl
ifelse(patsubst(<<$1>>, <<[^ ]>>, <<>>), <<>>,
<<test -z "<<$>>CONFIG_HEADERS" || echo timestamp > patsubst(<<$1>>, <<^\([^:]*/\)?.*>>, <<\1>>)stamp-h<<>>dnl>>,
<<am_indx=1
for am_file in <<$1>>; do
  case " <<$>>CONFIG_HEADERS " in
  *" <<$>>am_file "*<<)>>
    echo timestamp > `echo <<$>>am_file | sed -e 's%:.*%%' -e 's%[^/]*$%%'`stamp-h$am_indx
    ;;
  esac
  am_indx=`expr "<<$>>am_indx" + 1`
done<<>>dnl>>)
changequote([,]))])

# Add --enable-maintainer-mode option to configure.
# From Jim Meyering

# serial 1

AC_DEFUN(AM_MAINTAINER_MODE,
[AC_MSG_CHECKING([whether to enable maintainer-specific portions of Makefiles])
  dnl maintainer-mode is disabled by default
  AC_ARG_ENABLE(maintainer-mode,
[  --enable-maintainer-mode enable make rules and dependencies not useful
                          (and sometimes confusing) to the casual installer],
      USE_MAINTAINER_MODE=$enableval,
      USE_MAINTAINER_MODE=no)
  AC_MSG_RESULT($USE_MAINTAINER_MODE)
  AM_CONDITIONAL(MAINTAINER_MODE, test $USE_MAINTAINER_MODE = yes)
  MAINT=$MAINTAINER_MODE_TRUE
  AC_SUBST(MAINT)dnl
]
)

# Define a conditional.

AC_DEFUN(AM_CONDITIONAL,
[AC_SUBST($1_TRUE)
AC_SUBST($1_FALSE)
if $2; then
  $1_TRUE=
  $1_FALSE='#'
else
  $1_TRUE='#'
  $1_FALSE=
fi])


# serial 1 AC_LIB_LTDL

AC_DEFUN(AC_LIB_LTDL,
[AC_PREREQ(2.13)dnl
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([AC_C_CONST])dnl
AC_REQUIRE([AC_C_INLINE])dnl

dnl AC_LIB_LTDL must perform all the checks necessary for compilation
dnl of the ltdl objects -- including compiler checks (above) and header
dnl checks (below).
AC_REQUIRE([AC_HEADER_STDC])dnl

AC_CHECK_HEADERS(malloc.h memory.h stdlib.h stdio.h ctype.h dlfcn.h dl.h dld.h)
AC_CHECK_HEADERS(string.h strings.h, break)
AC_CHECK_FUNCS(strchr index, break)
AC_CHECK_FUNCS(strrchr rindex, break)
AC_CHECK_FUNCS(strcmp)

AC_REQUIRE([AC_LTDL_ENABLE_INSTALL])dnl
AC_REQUIRE([AC_LTDL_SHLIBEXT])dnl
AC_REQUIRE([AC_LTDL_SHLIBPATH])dnl
AC_REQUIRE([AC_LTDL_SYSSEARCHPATH])dnl
AC_REQUIRE([AC_LTDL_OBJDIR])dnl
AC_REQUIRE([AC_LTDL_DLPREOPEN])dnl
AC_REQUIRE([AC_LTDL_DLLIB])dnl
AC_REQUIRE([AC_LTDL_SYMBOL_USCORE])dnl
])

AC_DEFUN(AC_LTDL_ENABLE_INSTALL,
[AC_ARG_ENABLE(ltdl-install,
[  --enable-ltdl-install   install libltdl])

AM_CONDITIONAL(INSTALL_LTDL, test x"${enable_ltdl_install-no}" != xno)
AM_CONDITIONAL(CONVENIENCE_LTDL, test x"${enable_ltdl_convenience-no}" != xno)
])])


AC_DEFUN(AC_LTDL_SNARF_CONFIG,
[# Read the libtool configuration
rm -f conftest
./libtool --config > conftest
. ./conftest
rm -f conftest
])

AC_DEFUN(AC_LTDL_SHLIBEXT,
[AC_REQUIRE([AC_LTDL_SNARF_CONFIG])dnl
AC_CACHE_CHECK([which extension is used for shared libraries],
  libltdl_cv_shlibext, [dnl
(
  last=
  for spec in $library_names_spec; do
    last="$spec"
  done
changequote(, )
  echo "$last" | sed 's/\[.*\]//;s/^[^.]*//;s/\$.*$//;s/\.$//' > conftest
changequote([, ])
)
libltdl_cv_shlibext=`cat conftest`
rm -f conftest
])
if test -n "$libltdl_cv_shlibext"; then
  AC_DEFINE_UNQUOTED(LTDL_SHLIB_EXT, "$libltdl_cv_shlibext",
    [Define to the extension used for shared libraries, say, ".so". ])
fi
])

AC_DEFUN(AC_LTDL_SHLIBPATH,
[AC_REQUIRE([AC_LTDL_SNARF_CONFIG])dnl
AC_CACHE_CHECK([which variable specifies run-time library path],
  libltdl_cv_shlibpath_var, [libltdl_cv_shlibpath_var="$shlibpath_var"])
if test -n "$libltdl_cv_shlibpath_var"; then
  AC_DEFINE_UNQUOTED(LTDL_SHLIBPATH_VAR, "$libltdl_cv_shlibpath_var",
    [Define to the name of the environment variable that determines the dynamic library search path. ])
fi
])

AC_DEFUN(AC_LTDL_SYSSEARCHPATH,
[AC_REQUIRE([AC_LTDL_SNARF_CONFIG])dnl
AC_CACHE_CHECK([for the default library search path],
  libltdl_cv_sys_search_path, [libltdl_cv_sys_search_path="$sys_lib_dlsearch_path_spec"])
if test -n "$libltdl_cv_sys_search_path"; then
  case "$lt_target" in
  *-*-mingw*) pathsep=";" ;;
  *) pathsep=":" ;;
  esac
  sys_search_path=
  for dir in $libltdl_cv_sys_search_path; do
    if test -z "$sys_search_path"; then
      sys_search_path="$dir"
    else
      sys_search_path="$sys_search_path$pathsep$dir"
    fi
  done
  AC_DEFINE_UNQUOTED(LTDL_SYSSEARCHPATH, "$sys_search_path",
    [Define to the system default library search path. ])
fi
])

AC_DEFUN(AC_LTDL_OBJDIR,
[AC_CACHE_CHECK([for objdir],
  libltdl_cv_objdir, [libltdl_cv_objdir="$objdir"
if test -n "$objdir"; then
  :
else
  rm -f .libs 2>/dev/null
  mkdir .libs 2>/dev/null
  if test -d .libs; then
    libltdl_cv_objdir=.libs
  else
    # MS-DOS does not allow filenames that begin with a dot.
    libltdl_cv_objdir=_libs
  fi
rmdir .libs 2>/dev/null
fi])
AC_DEFINE_UNQUOTED(LTDL_OBJDIR, "$libltdl_cv_objdir/",
  [Define to the sub-directory in which libtool stores uninstalled libraries. ])
])

AC_DEFUN(AC_LTDL_DLPREOPEN,
[AC_REQUIRE([AC_LTDL_GLOBAL_SYMBOL_PIPE])dnl
AC_CACHE_CHECK([whether libtool supports -dlopen/-dlpreopen],
       libltdl_cv_preloaded_symbols, [dnl
  if test -n "$global_symbol_pipe"; then
    libltdl_cv_preloaded_symbols=yes
  else
    libltdl_cv_preloaded_symbols=no
  fi
])
if test x"$libltdl_cv_preloaded_symbols" = x"yes"; then
  AC_DEFINE(HAVE_PRELOADED_SYMBOLS, 1,
    [Define if libtool can extract symbol lists from object files. ])
fi
])

AC_DEFUN(AC_LTDL_DLLIB,
[LIBADD_DL=
AC_CHECK_LIB(dl, dlopen, [AC_DEFINE(HAVE_LIBDL, 1,
   [Define if you have the libdl library or equivalent. ]) LIBADD_DL="-ldl"],
[AC_CHECK_FUNC(dlopen, [AC_DEFINE(HAVE_LIBDL, 1,
   [Define if you have the libdl library or equivalent.])])])
AC_CHECK_FUNC(shl_load, [AC_DEFINE(HAVE_SHL_LOAD, 1,
   [Define if you have the shl_load function.])],
[AC_CHECK_LIB(dld, shl_load,
  [AC_DEFINE(HAVE_SHL_LOAD, 1,
     [Define if you have the shl_load function.])
   LIBADD_DL="$LIBADD_DL -ldld"])
])
AC_CHECK_LIB(dld, dld_link, [AC_DEFINE(HAVE_DLD, 1,
  [Define if you have the GNU dld library.])dnl
test "x$ac_cv_lib_dld_shl_load" = yes || LIBADD_DL="$LIBADD_DL -ldld"])
AC_SUBST(LIBADD_DL)

if test "x$ac_cv_func_dlopen" = xyes || test "x$ac_cv_lib_dl_dlopen" = xyes; then
 LIBS_SAVE="$LIBS"
 LIBS="$LIBS $LIBADD_DL"
 AC_CHECK_FUNCS(dlerror)
 LIBS="$LIBS_SAVE"
fi
])

AC_DEFUN(AC_LTDL_GLOBAL_SYMBOL_PIPE,
[dnl Check for command to grab the raw symbol name followed
dnl by C symbol name from nm.
AC_REQUIRE([AC_CANONICAL_HOST])dnl
AC_REQUIRE([AC_PROG_NM])dnl
# Check for command to grab the raw symbol name followed by C symbol from nm.
AC_MSG_CHECKING([command to parse $NM output])
AC_CACHE_VAL(ac_cv_sys_global_symbol_pipe,
[# These are sane defaults that work on at least a few old systems.
# {They come from Ultrix.  What could be older than Ultrix?!! ;)}

changequote(,)dnl
# Character class describing NM global symbol codes.
ac_symcode='[BCDEGRST]'

# Regexp to match symbols that can be accessed directly from C.
ac_sympat='\([_A-Za-z][_A-Za-z0-9]*\)'

# Transform the above into a raw symbol and a C symbol.
ac_symxfrm='\1 \2\3 \3'

# Transform an extracted symbol line into a proper C declaration
ac_global_symbol_to_cdecl="sed -n -e 's/^. .* \(.*\)$/extern char \1;/p'"

# Define system-specific variables.
case "$host_os" in
aix*)
  ac_symcode='[BCDT]'
  ;;
cygwin* | mingw*)
  ac_symcode='[ABCDGISTW]'
  ;;
hpux*)
  ac_global_symbol_to_cdecl="sed -n -e 's/^T .* \(.*\)$/extern char \1();/p' -e 's/^. .* \(.*\)$/extern char \1;/p'"
  ;;
irix*)
  ac_symcode='[BCDEGRST]'
  ;;
solaris*)
  ac_symcode='[BDT]'
  ;;
esac

# If we're using GNU nm, then use its standard symbol codes.
if $NM -V 2>&1 | egrep '(GNU|with BFD)' > /dev/null; then
  ac_symcode='[ABCDGISTW]'
fi
changequote([,])dnl

# Try without a prefix undercore, then with it.
for ac_symprfx in "" "_"; do

  ac_cv_sys_global_symbol_pipe="sed -n -e 's/^.*[ 	]\($ac_symcode\)[ 	][ 	]*\($ac_symprfx\)$ac_sympat$/$ac_symxfrm/p'"

  # Check to see that the pipe works correctly.
  ac_pipe_works=no
  rm -f conftest.$ac_ext
  cat > conftest.$ac_ext <<EOF
#ifdef __cplusplus
extern "C" {
#endif
char nm_test_var;
void nm_test_func(){}
#ifdef __cplusplus
}
#endif
int main(){nm_test_var='a';nm_test_func;return 0;}
EOF

  if AC_TRY_EVAL(ac_compile); then
    # Now try to grab the symbols.
    ac_nlist=conftest.nm

    if AC_TRY_EVAL(NM conftest.$ac_objext \| $ac_cv_sys_global_symbol_pipe \> $ac_nlist) && test -s "$ac_nlist"; then

      # Try sorting and uniquifying the output.
      if sort "$ac_nlist" | uniq > "$ac_nlist"T; then
	mv -f "$ac_nlist"T "$ac_nlist"
      else
	rm -f "$ac_nlist"T
      fi

      # Make sure that we snagged all the symbols we need.
      if egrep ' nm_test_var$' "$ac_nlist" >/dev/null; then
	if egrep ' nm_test_func$' "$ac_nlist" >/dev/null; then
	  cat <<EOF > conftest.c
#ifdef __cplusplus
extern "C" {
#endif

EOF
	  # Now generate the symbol file.
	  eval "$ac_global_symbol_to_cdecl"' < "$ac_nlist" >> conftest.c'

	  cat <<EOF >> conftest.c
#if defined (__STDC__) && __STDC__
# define lt_ptr_t void *
#else
# define lt_ptr_t char *
# define const
#endif

/* The mapping between symbol names and symbols. */
const struct {
  const char *name;
  lt_ptr_t address;
}
changequote(,)dnl
lt_preloaded_symbols[] =
changequote([,])dnl
{
EOF
	sed 's/^. \(.*\) \(.*\)$/  {"\2", (lt_ptr_t) \&\2},/' < "$ac_nlist" >> conftest.c
	cat <<\EOF >> conftest.c
  {0, (lt_ptr_t) 0}
};

#ifdef __cplusplus
}
#endif
EOF
	  # Now try linking the two files.
	  mv conftest.$ac_objext conftstm.$ac_objext
	  ac_save_LIBS="$LIBS"
	  ac_save_CFLAGS="$CFLAGS"
	  LIBS="conftstm.$ac_objext"
	  CFLAGS="$CFLAGS$no_builtin_flag"
	  if AC_TRY_EVAL(ac_link) && test -s conftest; then
	    ac_pipe_works=yes
	  else
	    echo "configure: failed program was:" >&AC_FD_CC
	    cat conftest.c >&AC_FD_CC
	  fi
	  LIBS="$ac_save_LIBS"
	  CFLAGS="$ac_save_CFLAGS"
	else
	  echo "cannot find nm_test_func in $ac_nlist" >&AC_FD_CC
	fi
      else
	echo "cannot find nm_test_var in $ac_nlist" >&AC_FD_CC
      fi
    else
      echo "cannot run $ac_cv_sys_global_symbol_pipe" >&AC_FD_CC
    fi
  else
    echo "$progname: failed program was:" >&AC_FD_CC
    cat conftest.c >&AC_FD_CC
  fi
  rm -rf conftest* conftst*

  # Do not use the global_symbol_pipe unless it works.
  if test "$ac_pipe_works" = yes; then
    if test x"$ac_symprfx" = x"_"; then
      ac_cv_sys_symbol_underscore=yes
    else
      ac_cv_sys_symbol_underscore=no
    fi
    break
  else
    ac_cv_sys_global_symbol_pipe=
  fi
done
])

ac_result=yes
if test -z "$ac_cv_sys_global_symbol_pipe"; then
   ac_result=no
fi
AC_MSG_RESULT($ac_result)
])

AC_DEFUN(AC_LTDL_SYMBOL_USCORE,
[dnl does the compiler prefix global symbols with an underscore?
AC_REQUIRE([AC_LTDL_GLOBAL_SYMBOL_PIPE])dnl
AC_MSG_CHECKING([for _ prefix in compiled symbols])
AC_CACHE_VAL(ac_cv_sys_symbol_underscore,
[ac_cv_sys_symbol_underscore=no
cat > conftest.$ac_ext <<EOF
void nm_test_func(){}
int main(){nm_test_func;return 0;}
EOF
if AC_TRY_EVAL(ac_compile); then
  # Now try to grab the symbols.
  ac_nlist=conftest.nm
  if AC_TRY_EVAL(NM conftest.$ac_objext \| $ac_cv_sys_global_symbol_pipe \> $ac_nlist) && test -s "$ac_nlist"; then
    # See whether the symbols have a leading underscore.
    if egrep '^. _nm_test_func' "$ac_nlist" >/dev/null; then
      ac_cv_sys_symbol_underscore=yes
    else
      if egrep '^. nm_test_func ' "$ac_nlist" >/dev/null; then
	:
      else
	echo "configure: cannot find nm_test_func in $ac_nlist" >&AC_FD_CC
      fi
    fi
  else
    echo "configure: cannot run $ac_cv_sys_global_symbol_pipe" >&AC_FD_CC
  fi
else
  echo "configure: failed program was:" >&AC_FD_CC
  cat conftest.c >&AC_FD_CC
fi
rm -rf conftest*
])
AC_MSG_RESULT($ac_cv_sys_symbol_underscore)
AC_LTDL_DLSYM_USCORE
])

AC_DEFUN(AC_LTDL_DLSYM_USCORE,
[AC_REQUIRE([AC_LTDL_SYMBOL_USCORE])dnl
if test x"$ac_cv_sys_symbol_underscore" = xyes; then
  if test x"$ac_cv_func_dlopen" = xyes ||
     test x"$ac_cv_lib_dl_dlopen" = xyes ; then
	AC_CACHE_CHECK([whether we have to add an underscore for dlsym],
		libltdl_cv_need_uscore, [dnl
		AC_TRY_RUN([
#if HAVE_DLFCN_H
#include <dlfcn.h>
#endif

#include <stdio.h>

#ifdef RTLD_GLOBAL
# define LTDL_GLOBAL	RTLD_GLOBAL
#else
# ifdef DL_GLOBAL
#  define LTDL_GLOBAL	DL_GLOBAL
# else
#  define LTDL_GLOBAL	0
# endif
#endif

/* We may have to define LTDL_LAZY_OR_NOW in the command line if we
   find out it does not work in some platform. */
#ifndef LTDL_LAZY_OR_NOW
# ifdef RTLD_LAZY
#  define LTDL_LAZY_OR_NOW	RTLD_LAZY
# else
#  ifdef DL_LAZY
#   define LTDL_LAZY_OR_NOW	DL_LAZY
#  else
#   ifdef RTLD_NOW
#    define LTDL_LAZY_OR_NOW	RTLD_NOW
#   else
#    ifdef DL_NOW
#     define LTDL_LAZY_OR_NOW	DL_NOW
#    else
#     define LTDL_LAZY_OR_NOW	0
#    endif
#   endif
#  endif
# endif
#endif

fnord() { int i=42;}
main() { void *self, *ptr1, *ptr2; self=dlopen(0,LTDL_GLOBAL|LTDL_LAZY_OR_NOW);
    if(self) { ptr1=dlsym(self,"fnord"); ptr2=dlsym(self,"_fnord");
	       if(ptr1 && !ptr2) { dlclose(self); exit(0); } } exit(1); }
],	libltdl_cv_need_uscore=no, libltdl_cv_need_uscore=yes,
	libltdl_cv_need_uscore=cross
)])
  fi
fi

if test x"$libltdl_cv_need_uscore" = xyes; then
  AC_DEFINE(NEED_USCORE, 1,
    [Define if dlsym() requires a leading underscode in symbol names. ])
fi
])

