#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0019B04C(uint param_1);
extern int func_002226D8(int param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern uint *DAT_001afdd0;
extern int *DAT_001afdd4;
extern int *DAT_001afdd8;
extern int *DAT_001afddc;
extern int DAT_001afdfc;
extern char s_SE_MoriblinShield_STOLEN_001afde0[];
extern char s_SE_Moriblin_SHOCK_001afe00[];

// USA 001AFCB4 <- EU 001AFCB4 (Ghidra, non-matching)
// GLOBAL DAT_001afdd0 uint *
// GLOBAL DAT_001afdd4 int *
// GLOBAL DAT_001afdd8 int *
// GLOBAL DAT_001afddc int *
// GLOBAL DAT_001afdfc int
// GLOBAL s_SE_MoriblinShield_STOLEN_001afde0 string
// GLOBAL s_SE_Moriblin_SHOCK_001afe00 string

undefined4 func_001AFCB4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2b4 (*(ushort *)(albw_frame + 0x2c))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(int *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_18 (*(int *)(albw_frame + 0x2c8))
  #define local_14 (*(char * *)(albw_frame + 0x2cc))
  *(undefined1 *)(param_1 + 0x28d) = 0;
  iVar4 = *(int *)(param_1[0x266] + 0x18);
  local_2c0 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_298 = 0;
  local_294 = 0;
  local_20 = 0;
  func_002DFF7C(&local_2e0);
  local_2e0 = func_0019B04C(*DAT_001afdd0);
  uVar1 = func_00581D60(*DAT_001afdd4);
  local_290 = (undefined2)uVar1;
  local_2dc = *(undefined4 *)(iVar4 + 0x8c);
  local_2d8 = *(undefined4 *)(iVar4 + 0x9c);
  local_2d4 = *(undefined4 *)(iVar4 + 0xac);
  local_2b6 = 1;
  iVar2 = func_00588BE4((int)param_1);
  local_2b4 = (ushort)(iVar2 == *DAT_001afdd8);
  local_294 = param_1[0x286];
  piVar3 = func_004C4AF4(*DAT_001afddc,&local_2e0,0);
  if (piVar3 != (int *)0x0) {
    func_001151EC(piVar3 + 0x10e,(undefined4 *)(iVar4 + 0x80));
    iVar2 = DAT_001afdfc;
    local_14 = s_SE_MoriblinShield_STOLEN_001afde0;
    local_18 = DAT_001afdfc;
    func_00150A84(piVar3,&local_18,0);
    local_14 = s_SE_Moriblin_SHOCK_001afe00;
    local_18 = iVar2;
    func_00150A84(param_1,&local_18,0);
  }
  return func_002226D8(param_1[0x266]);
}

