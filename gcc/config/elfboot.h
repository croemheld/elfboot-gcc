#undef TARGET_ELFBOOT
#define TARGET_ELFBOOT 1
 
#undef LIB_SPEC
#define LIB_SPEC "-lc"
 
#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbegin.o%s"
 
#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend.o%s crtn.o%s"
 
#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1
 
#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()      \
  do {                                \
    builtin_define ("__elfboot__");      \
    builtin_define ("__unix__");      \
    builtin_assert ("system=elfboot");   \
    builtin_assert ("system=unix");   \
    builtin_assert ("system=posix");   \
  } while(0);