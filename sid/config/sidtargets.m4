dnl sidtargets.m4  -*- m4 -*-

dnl Copyright (C) 1999, 2000, 2001 Red Hat.
dnl This file is part of SID and is licensed under the GPL.
dnl See the file COPYING.SID for conditions for redistribution.

dnl Use CY_SIDTARGET_CHECK in configure.in to respond to the builder's
dnl selection of --target/--enable-targets

AC_DEFUN([CY_SIDTARGET_CHECK], [


dnl Assume all targets if $host==$target or $target==NONE
sid_host=`$ac_config_sub $host`
sid_target=`$ac_config_sub $target`

if test "$sid_host" = "$sid_target" -o "$target" = "NONE"
then
    AC_MSG_WARN(Assuming --enable-targets=all)
    all_targets=""
    sidtarget_default=1
else 
    all_targets="$target"
    sidtarget_default=0
fi


AC_ARG_ENABLE(targets,
[  --enable-targets=LIST   support given additional targets, or all],
[
  case "${enable_targets}" in
    all)  sidtarget_default=1 ;;
    no)   sidtarget_default=0 ;;
    *)    all_targets="${all_targets} `echo ${enable_targets} | sed -e 's-,- -g'`" ;;
  esac
])

dnl Enumerate known chip families
sidtarget_arm=$sidtarget_default
sidtarget_x86=$sidtarget_default
sidtarget_mips=$sidtarget_default
sidtarget_m32r=$sidtarget_default
sidtarget_m68k=$sidtarget_default
sidtarget_mt=$sidtarget_default
sidtarget_ppc=$sidtarget_default
sidtarget_sh=$sidtarget_default
sidtarget_sh64=$sidtarget_default
sidtarget_xstormy16=$sidtarget_default

dnl Iterate over all listed targets
for targ in $all_targets
do
   case "$targ" in
      arm*)   sidtarget_arm=1 ;;
      thumb*) sidtarget_arm=1 ;;
      i386*) sidtarget_x86=1 ;;
      mips*)  sidtarget_mips=1 ;;
      m32r*)  sidtarget_m32r=1 ;;
      m68k*)  sidtarget_m68k=1 ;;
      mt*)    sidtarget_mt=1 ;;
      powerpc*) sidtarget_ppc=1 ;;
      ppc*)   sidtarget_ppc=1 ;;
      sh64*) sidtarget_sh64=1 ;;
      sh*)   sidtarget_sh=1 ;;
      xstormy16*) sidtarget_xstormy16=1 ;;
      *)      AC_MSG_WARN("Unknown target $targ") ;;
   esac
done

dnl Ensure at least one of these variables is non-zero.
case 1 in
  ${sidtarget_arm}) ;;
  ${sidtarget_x86}) ;;
  ${sidtarget_mips}) ;;
  ${sidtarget_m32r}) ;;
  ${sidtarget_m68k}) ;;
  ${sidtarget_mt}) ;;
  ${sidtarget_ppc}) ;;
  ${sidtarget_sh}) ;;
  ${sidtarget_sh64}) ;;
  ${sidtarget_xstormy16}) ;;
  *) AC_MSG_WARN([No selected sid targets: use --enable-targets or --target])
	;;
esac

dnl Report results SIDTARGET_family
dnl nb: Use "x$sidtarget_family" in the tested expression to prevent
dnl     syntax errors in configure when sidtarget_family is left unset.

AC_MSG_CHECKING(ARM family support)
AC_SUBST(sidtarget_arm)
AM_CONDITIONAL(SIDTARGET_ARM,[test "x$sidtarget_arm" = x1])
AC_MSG_RESULT($sidtarget_arm)

AC_MSG_CHECKING(X86 family support)
AC_SUBST(sidtarget_x86)
AM_CONDITIONAL(SIDTARGET_X86,[test "x$sidtarget_x86" = x1])
AC_MSG_RESULT($sidtarget_x86)

AC_MSG_CHECKING(MIPS family support)
AC_SUBST(sidtarget_mips)
AM_CONDITIONAL(SIDTARGET_MIPS,[test "x$sidtarget_mips" = x1])
AC_MSG_RESULT($sidtarget_mips)

AC_MSG_CHECKING(M32R family support)
AC_SUBST(sidtarget_m32r)
AM_CONDITIONAL(SIDTARGET_M32R,[test "x$sidtarget_m32r" = x1])
AC_MSG_RESULT($sidtarget_m32r)

AC_MSG_CHECKING(M68K family support)
AC_SUBST(sidtarget_m68k)
AM_CONDITIONAL(SIDTARGET_M68K,[test "x$sidtarget_m68k" = x1])
AC_MSG_RESULT($sidtarget_m68k)

AC_MSG_CHECKING(MT family support)
AC_SUBST(sidtarget_mt)
AM_CONDITIONAL(SIDTARGET_MT,[test "x$sidtarget_mt" = x1])
AC_MSG_RESULT($sidtarget_mt)

AC_MSG_CHECKING(PPC family support)
AC_SUBST(sidtarget_ppc)
AM_CONDITIONAL(SIDTARGET_PPC,[test "x$sidtarget_ppc" = x1])
AC_MSG_RESULT($sidtarget_ppc)

AC_MSG_CHECKING(SH family support)
AC_SUBST(sidtarget_sh)
AM_CONDITIONAL(SIDTARGET_SH,[test "x$sidtarget_sh" = x1])
AC_MSG_RESULT($sidtarget_sh)

AC_MSG_CHECKING(SH64 family support)
AC_SUBST(sidtarget_sh64)
AM_CONDITIONAL(SIDTARGET_SH64,[test "x$sidtarget_sh64" = x1])
AC_MSG_RESULT($sidtarget_sh64)

AC_MSG_CHECKING(Sanyo Xstormy16 family support)
AC_SUBST(sidtarget_xstormy16)
AM_CONDITIONAL(SIDTARGET_XSTORMY16,[test "x$sidtarget_xstormy16" = x1])
AC_MSG_RESULT($sidtarget_xstormy16)

])
