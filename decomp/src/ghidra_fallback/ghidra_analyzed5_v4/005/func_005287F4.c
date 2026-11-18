#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int func_004F8738(undefined4 *param_1);
extern int func_00520FC0(void);
extern float func_00528734(int param_1,float *param_2,int param_3);
extern int func_0058A4BC(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined1 param_5, undefined4 param_6,uint param_7);
extern int DAT_005288e0;
extern float DAT_005288e4;
extern float DAT_005288e8;

// USA 005287F4 <- EU 005287CC (Ghidra, non-matching)
// GLOBAL DAT_005288e0 int
// GLOBAL DAT_005288e4 float
// GLOBAL DAT_005288e8 float

/* WARNING: Variable defined which should be unmapped: objStack_68 */

float func_005287F4(int param_1,float *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define afStack_58 ((float *)(albw_frame + 0x18))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define uStack_28 (*(uint *)(albw_frame + 0x48))
  #define uStack_24 (*(uint *)(albw_frame + 0x4c))
  #define afStack_20 ((float *)(albw_frame + 0x50))
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x930) * 0x30;
  local_38 = *(float *)(iVar1 + 0xc);
  local_34 = *(undefined4 *)(iVar1 + 0x1c);
  local_30 = *(undefined4 *)(iVar1 + 0x2c);
  if (param_3 == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 1000);
  }
  else {
    uVar3 = *param_3;
  }
  func_004D8240(afStack_20,*param_4,uVar3,*(float *)(DAT_005288e0 + 8) * DAT_005288e4);
  func_00115C54((float *)objStack_68,&local_38,afStack_20);
  local_2c = ALBW_AS_F32(objStack_68[0]);
  uStack_28 = objStack_68[1];
  uStack_24 = objStack_68[2];
  if (param_2 != (float *)0x0) {
    uVar2 = func_00520FC0();
    fVar4 = func_00528734(param_1,uVar2,(uint)(*param_4 != 0));
    *param_2 = fVar4;
  }
  func_004F8738(afStack_58);
  objStack_68[0] = 1;
  objStack_68[1] = 0;
  objStack_68[2] = 0xf;
  iVar1 = func_0058A4BC(param_1,&local_38,&local_2c,afStack_58,1,0,0xf);
  fVar4 = DAT_005288e8;
  if (iVar1 != 0) {
    fVar4 = func_00528734(param_1,afStack_58,(uint)(*param_4 != 0));
  }
  return fVar4;
}

