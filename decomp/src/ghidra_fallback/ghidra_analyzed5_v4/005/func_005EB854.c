#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb86c;
extern undefined4 *DAT_005eb870;
extern undefined4 DAT_005eb874;
extern undefined4 DAT_005eb888;
extern undefined4 DAT_005eb88c;
extern char s_AudioFxObject_005eb878[];

// USA 005EB854 <- EU 005EB82C (Ghidra, non-matching)
// GLOBAL DAT_005eb86c undefined4 *
// GLOBAL DAT_005eb870 undefined4 *
// GLOBAL DAT_005eb874 undefined4
// GLOBAL DAT_005eb888 undefined4
// GLOBAL DAT_005eb88c undefined4
// GLOBAL s_AudioFxObject_005eb878 string

undefined4 func_005EB854(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb86c;
  *DAT_005eb86c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb870;
  *DAT_005eb870 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005eb874;
  puVar1[3] = s_AudioFxObject_005eb878;
  return func_005902C0(puVar1 + 2);
}

