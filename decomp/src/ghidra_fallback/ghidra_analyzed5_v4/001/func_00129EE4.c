#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00129460(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_0012A134(int param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0012a0cc;
extern float DAT_0012a0d0;
extern int *DAT_0012a0d4;
extern int DAT_0012a0d8;
extern float DAT_0012a0dc;
extern float DAT_0012a0e0;
extern float *DAT_0012a0e4;
extern uint *DAT_0012a0e8;

// USA 00129EE4 <- EU 00129EE4 (Ghidra, non-matching)
// GLOBAL DAT_0012a0cc int *
// GLOBAL DAT_0012a0d0 float
// GLOBAL DAT_0012a0d4 int *
// GLOBAL DAT_0012a0d8 int
// GLOBAL DAT_0012a0dc float
// GLOBAL DAT_0012a0e0 float
// GLOBAL DAT_0012a0e4 float *
// GLOBAL DAT_0012a0e8 uint *

undefined4 func_00129EE4(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 in_r2;
  uint in_r3;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  iVar5 = 2;
  if (((int)*(char *)(*DAT_0012a0cc + 0x18) - 0x18U < 3) ||
     (iVar1 = func_0051E6D0(*DAT_0012a0d4,(float *)(param_1 + 0x3d0),DAT_0012a0d0), iVar1 != 0)) {
    pfVar2 = (float *)func_00520FC0();
    fVar6 = *(float *)(param_1 + 0x3d0) - *pfVar2;
    fVar7 = *(float *)(param_1 + 0x3d8) - pfVar2[2];
    if ((int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7)) < DAT_0012a0d8) {
      iVar5 = 0;
    }
    else {
      fVar6 = DAT_0012a0dc;
      if (*(char *)(param_1 + 0x97c) != '\0') {
        fVar6 = DAT_0012a0e0;
      }
      pfVar2 = (float *)func_00520FC0();
      fVar8 = *(float *)(param_1 + 0x3d0) - *pfVar2;
      fVar7 = *(float *)(param_1 + 0x3d8) - pfVar2[2];
      if (fVar8 * fVar8 + fVar7 * fVar7 < fVar6 * fVar6) {
        iVar5 = 1;
      }
    }
  }
  puVar3 = (undefined4 *)func_00520FC0();
  iVar1 = func_00129460(param_1,puVar3,in_r2,in_r3);
  puVar3 = (undefined4 *)(param_1 + 0x8bc);
  if (iVar1 == 0) {
    if (iVar5 == 2) {
      iVar1 = func_0012A134(param_1);
      if (iVar1 == 0) goto LAB_0012a084;
    }
    else if (*(char *)(param_1 + 0x8c0) != '\x03') {
      local_30 = *DAT_0012a0e4;
      fStack_2c = DAT_0012a0e4[1];
      local_28 = DAT_0012a0e4[2];
      func_00115C70(&local_30,(float *)(param_1 + 0x90c),(float *)(param_1 + 0x3d0));
      local_24[0] = func_004904CC(local_30,local_28);
      local_24[0] = *(int *)(param_1 + 1000) - local_24[0];
      uVar4 = func_0058E2B8(local_24);
      if (*DAT_0012a0e8 < uVar4) {
        return func_00656A1C(puVar3,3);
      }
    }
    if (*(char *)(param_1 + 0x97c) == '\0' || iVar5 == 0) {
      return func_00656A1C(puVar3,5);
    }
    if (iVar5 == 1) {
      return func_00656A1C(puVar3,4);
    }
  }
LAB_0012a084:
  return func_00656A1C(puVar3,0);
}

