#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_001A6E30(int param_1);
extern int func_001A6F14(int param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_005285A4(int param_1);
extern float func_005287F4(int param_1,float *param_2,uint *param_3,uint *param_4);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a82a4;
extern float DAT_001a82a8;
extern int DAT_001a82ac;

// USA 001A80F4 <- EU 001A80F4 (Ghidra, non-matching)
// GLOBAL DAT_001a82a4 float
// GLOBAL DAT_001a82a8 float
// GLOBAL DAT_001a82ac int

undefined4 func_001A80F4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint in_r3;
  undefined4 *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  iVar2 = (uint)*(byte *)(param_1 + 0x924) * 0x40000000;
  if (*(short *)(param_1 + 0x2e) == 1) {
    iVar2 = iVar2 + 0x20000000;
  }
  local_18 = in_r3;
  bVar1 = func_0051D27C((int *)(param_1 + 1000),iVar2,*(int *)(param_1 + 0x918));
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_001a82a4);
  fVar6 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
  if ((bVar1) && (*(uint *)(param_1 + 0x900) < *(uint *)(param_1 + 0x904))) {
    *(uint *)(param_1 + 0x900) = *(uint *)(param_1 + 0x900) + 1;
  }
  if ((*(uint *)(param_1 + 0x8f8) <= *(uint *)(param_1 + 0x8f4)) ||
     ((*(uint *)(param_1 + 0x8f4) = *(uint *)(param_1 + 0x8f4) + 1,
      *(char *)(param_1 + 0x934) != '\0' && (*(char *)(param_1 + 0x935) == '\0')))) {
    func_001A6F14(param_1);
  }
  puVar4 = (undefined4 *)(param_1 + 0x8bc);
  if ((*(uint *)(param_1 + 0x90c) < *(uint *)(param_1 + 0x910)) ||
     (iVar2 = func_005285A4(param_1), iVar2 == 0)) {
    uVar3 = *(uint *)(param_1 + 0x8ec);
    bVar5 = *(uint *)(param_1 + 0x8e8) < uVar3;
    if (bVar5) {
      uVar3 = *(uint *)(param_1 + 0x8e8) + 1;
    }
    if (bVar5) {
      *(uint *)(param_1 + 0x8e8) = uVar3;
    }
    if (!bVar5 && bVar1) {
      uVar8 = func_0058A474(param_1,0x46);
      if ((((int)uVar8 != 0) && (*(uint *)(param_1 + 0x904) <= *(uint *)(param_1 + 0x900))) &&
         (iVar2 = func_001A6E30(param_1), iVar2 == 0)) {
        local_18 = 0;
        fVar7 = func_005287F4(param_1,(float *)0x0,(uint *)0x0,&local_18);
        fVar6 = DAT_001a82a8;
        *(float *)(param_1 + 0x95c) = fVar7;
        if (0x40000000 < (int)ALBW_AS_U32((fVar7 * *(float *)(DAT_001a82ac + 8) * fVar6))) {
          return func_0065A840(puVar4,4);
        }
      }
      return func_0065A840(puVar4,0);
    }
  }
  else {
    func_0065A840(puVar4,2);
  }
  return 0;
}

