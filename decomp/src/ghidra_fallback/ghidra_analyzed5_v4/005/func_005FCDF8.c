#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fce50;
extern undefined4 *DAT_005fce54;
extern undefined4 DAT_005fce6c;
extern undefined4 DAT_005fce70;
extern undefined4 DAT_005fce74;
extern undefined4 *DAT_005fce78;
extern undefined4 *DAT_005fce88;
extern char s_DefaultShadowLink_005fce58[];
extern char s_dsl_player__005fce7c[];
extern char s_dsl_user_name_005fce8c[];

// USA 005FCDF8 <- EU 005FCDD0 (Ghidra, non-matching)
// GLOBAL DAT_005fce50 undefined4 *
// GLOBAL DAT_005fce54 undefined4 *
// GLOBAL DAT_005fce6c undefined4
// GLOBAL DAT_005fce70 undefined4
// GLOBAL DAT_005fce74 undefined4
// GLOBAL DAT_005fce78 undefined4 *
// GLOBAL DAT_005fce88 undefined4 *
// GLOBAL s_DefaultShadowLink_005fce58 string
// GLOBAL s_dsl_player__005fce7c string
// GLOBAL s_dsl_user_name_005fce8c string

undefined4 func_005FCDF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fce50;
  *DAT_005fce50 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fce6c;
  puVar1 = DAT_005fce54;
  *DAT_005fce54 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_DefaultShadowLink_005fce58;
  puVar1[2] = uVar2;
  puVar1 = DAT_005fce78;
  DAT_005fce78[1] = s_dsl_player__005fce7c;
  *puVar1 = uVar2;
  puVar1 = DAT_005fce88;
  DAT_005fce88[1] = s_dsl_user_name_005fce8c;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

