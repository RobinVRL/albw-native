#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fa84c;
extern undefined4 *DAT_005fa850;
extern undefined4 DAT_005fa868;
extern undefined4 DAT_005fa86c;
extern undefined4 DAT_005fa870;
extern undefined4 *DAT_005fa874;
extern undefined4 *DAT_005fa88c;
extern char s_DefaultShadowLink_005fa854[];
extern char s_dsl_cross_old_man_005fa878[];
extern char s_dsl_user_name_00_005fa890[];

// USA 005FA7F4 <- EU 005FA7CC (Ghidra, non-matching)
// GLOBAL DAT_005fa84c undefined4 *
// GLOBAL DAT_005fa850 undefined4 *
// GLOBAL DAT_005fa868 undefined4
// GLOBAL DAT_005fa86c undefined4
// GLOBAL DAT_005fa870 undefined4
// GLOBAL DAT_005fa874 undefined4 *
// GLOBAL DAT_005fa88c undefined4 *
// GLOBAL s_DefaultShadowLink_005fa854 string
// GLOBAL s_dsl_cross_old_man_005fa878 string
// GLOBAL s_dsl_user_name_00_005fa890 string

undefined4 func_005FA7F4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fa84c;
  *DAT_005fa84c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fa868;
  puVar1 = DAT_005fa850;
  *DAT_005fa850 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_DefaultShadowLink_005fa854;
  puVar1[2] = uVar2;
  puVar1 = DAT_005fa874;
  DAT_005fa874[1] = s_dsl_cross_old_man_005fa878;
  *puVar1 = uVar2;
  puVar1 = DAT_005fa88c;
  DAT_005fa88c[1] = s_dsl_user_name_00_005fa890;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

