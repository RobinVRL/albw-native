#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004C06FC(int param_1,int param_2,int param_3);
extern float DAT_001cc3b4;
extern float DAT_001cc3b8;
extern int DAT_001cc3dc;
extern char s_SE_Medium_MAGIC_BIND_SahasGirl_001cc3bc[];

// USA 001CC268 <- EU 001CC268 (Ghidra, non-matching)
// GLOBAL DAT_001cc3b4 float
// GLOBAL DAT_001cc3b8 float
// GLOBAL DAT_001cc3dc int
// GLOBAL s_SE_Medium_MAGIC_BIND_SahasGirl_001cc3bc string

void func_001CC268(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar5 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar5);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar3;
  if (*(int *)(param_1 + 0x970) != 0) {
    fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fVar7);
  }
  if (*(short *)(param_1 + 0x2e) != 1) goto LAB_001cc370;
  fVar7 = *(float *)(param_1 + 0x3d4);
  fVar8 = *(float *)(param_1 + 0x98c);
  if (fVar8 != fVar7) {
    if (DAT_001cc3b4 < fVar8 - fVar7) {
      fVar7 = fVar7 + DAT_001cc3b4;
    }
    else {
      if (DAT_001cc3b8 <= fVar8 - fVar7) {
        *(float *)(param_1 + 0x3d4) = fVar8;
        goto LAB_001cc338;
      }
      fVar7 = fVar7 - DAT_001cc3b4;
    }
    *(float *)(param_1 + 0x3d4) = fVar7;
  }
LAB_001cc338:
  if ((*(char *)(param_1 + 0x860) == '\0') && (*(char *)(param_1 + 0x991) != '\0')) {
    local_14 = s_SE_Medium_MAGIC_BIND_SahasGirl_001cc3bc;
    local_18 = DAT_001cc3dc;
    func_001507D8(param_1,&local_18,0);
  }
LAB_001cc370:
  func_004BCAA8(param_1);
  func_004BC8D8(param_1);
  bVar6 = *(short *)(param_1 + 0x2e) != 1;
  cVar1 = '\x01';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x990);
  }
  if (bVar6 && cVar1 != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x7a4) != 0) {
    if ((*(int **)(param_1 + 0x7b8) != (int *)0x0) && (*(byte *)(param_1 + 0x917) != 0)) {
      func_00169A80(*(int **)(param_1 + 0x7b8),0,(uint)*(byte *)(param_1 + 0x917),piVar5);
      func_00168E9C(*(int **)(param_1 + 0x7b8),*(int *)(param_1 + 0x7a4),(int *)0x0);
    }
    func_004C06FC(param_1,*(int *)(param_1 + 0x7a4),*(int *)(param_1 + 0x8fc));
    *(undefined1 *)(param_1 + 0x912) = 2;
  }
  return;
}

