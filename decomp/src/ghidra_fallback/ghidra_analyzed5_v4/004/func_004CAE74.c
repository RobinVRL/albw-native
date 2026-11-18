#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004C9B74(int param_1);
extern int func_004CA984(int param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004cb018;
extern float DAT_004cb01c;
extern float DAT_004cb020;
extern int DAT_004cb024;
extern char s_SE_Bee_FLY_ATTACK_004cb004[];

// USA 004CAE74 <- EU 004CAE4C (Ghidra, non-matching)
// GLOBAL DAT_004cb018 int
// GLOBAL DAT_004cb01c float
// GLOBAL DAT_004cb020 float
// GLOBAL DAT_004cb024 int
// GLOBAL s_SE_Bee_FLY_ATTACK_004cb004 string

undefined4 func_004CAE74(int param_1)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  local_1c = s_SE_Bee_FLY_ATTACK_004cb004;
  local_20 = DAT_004cb018;
  func_001507D8(param_1,&local_20,0);
  iVar6 = *(int *)(param_1 + 0x92c);
  func_004CA984(param_1);
  puVar4 = func_004CADD8(param_1,*(uint *)(param_1 + 0x92c));
  puVar7 = (undefined4 *)(param_1 + 0x8bc);
  if (puVar4 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x934) != 7) {
      return func_0066A284(puVar7,(char)*(int *)(param_1 + 0x934));
    }
    iVar6 = func_004C9B74(param_1);
    if (iVar6 == 0) {
      return func_0066A284(puVar7,3);
    }
    return func_0066A284(puVar7,7);
  }
  *(undefined4 *)(param_1 + 0x8e8) = puVar4[0xf4];
  *(undefined4 *)(param_1 + 0x8ec) = puVar4[0xf5];
  *(undefined4 *)(param_1 + 0x8f0) = puVar4[0xf6];
  if (iVar6 != *(int *)(param_1 + 0x92c)) {
    *(undefined1 *)(param_1 + 0x939) = 0;
  }
  iVar6 = DAT_004cb024;
  fVar2 = DAT_004cb020;
  cVar1 = *(char *)(param_1 + 0x939);
  if (cVar1 == '\0') {
    fVar8 = *(float *)(param_1 + 0x3dc) * DAT_004cb01c;
    fVar9 = *(float *)(param_1 + 0x3e4) * DAT_004cb01c;
    *(float *)(param_1 + 0x3dc) = fVar8;
    *(float *)(param_1 + 0x3e4) = fVar9;
    if (fVar8 <= fVar2) {
      fVar8 = -fVar8;
    }
    if ((int)ALBW_AS_U32(fVar8) <= iVar6) {
      if (fVar9 <= fVar2) {
        fVar9 = -fVar9;
      }
      if ((int)ALBW_AS_U32(fVar9) <= iVar6) {
        *(float *)(param_1 + 0x3dc) = fVar2;
        *(float *)(param_1 + 0x3e0) = fVar2;
        *(float *)(param_1 + 0x3e4) = fVar2;
        uVar3 = 1;
        goto LAB_004cafdc;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar6 = func_004C9AFC(param_1,(float *)(param_1 + 0x8e8));
      if (iVar6 == 0) {
        return 0;
      }
      uVar3 = 2;
LAB_004cafdc:
      *(undefined1 *)(param_1 + 0x939) = uVar3;
      return 0;
    }
    if (cVar1 == '\x02') {
      uVar5 = *(uint *)(param_1 + 0x918);
      if (uVar5 < *(uint *)(param_1 + 0x91c)) {
        uVar5 = uVar5 + 1;
        *(uint *)(param_1 + 0x918) = uVar5;
      }
      if (*(uint *)(param_1 + 0x91c) <= uVar5) {
        func_0066A284(puVar7,8);
      }
    }
  }
  return 0;
}

