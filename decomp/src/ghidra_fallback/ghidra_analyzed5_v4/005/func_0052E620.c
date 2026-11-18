#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0052E454(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00537C3C(void);
extern float DAT_0052e7a0;
extern float DAT_0052e7a4;
extern float DAT_0052e7a8;
extern float DAT_0052e7ac;

// USA 0052E620 <- EU 0052E5F8 (Ghidra, non-matching)
// GLOBAL DAT_0052e7a0 float
// GLOBAL DAT_0052e7a4 float
// GLOBAL DAT_0052e7a8 float
// GLOBAL DAT_0052e7ac float

bool func_0052E620(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  uVar2 = param_1 + 0x600;
  bVar4 = *(char *)(param_1 + 0x6c5) == '\0';
  if (bVar4) {
    uVar2 = (uint)*(byte *)(param_1 + 0x6c7);
  }
  if (bVar4 && uVar2 == 0) {
    bVar4 = func_00537C3C();
    if (!bVar4) {
      return bVar4;
    }
    if ((*(int *)(param_1 + 0x5a8) == 0x3f800000) &&
       (((fVar5 = DAT_0052e7a0, param_2 != 0 ||
         ((((bVar1 = *(byte *)(*(int *)(param_1 + 0x604) + 0x324),
            (bVar1 & 1) != 0 || (bVar1 & 8) != 0 ||
            (*(char *)(*(int *)(param_1 + 0x604) + 0x168) != '\0')) ||
           (DAT_0052e7a0 <= *(float *)(param_1 + 0x3e0))) &&
          (uVar2 = func_0052E454(param_1,(float *)(param_1 + 0x3d0),1,DAT_0052e7a4), uVar2 == 0))))
        && (((*(uint *)(*(int *)(param_1 + 0x604) + 0x328) & 0x80) == 0 ||
            (*(char *)(*(int *)(param_1 + 0x604) + 0x33c) != '\f')))))) {
      iVar3 = *(int *)(param_1 + 0x5f4);
      if (*(char *)(iVar3 + 0x3bae) == '\x01') {
        if (param_2 != 0) {
          return true;
        }
        local_50 = *(float *)(iVar3 + 0x3b64);
        local_4c = *(float *)(iVar3 + 0x3b68);
        uStack_48 = *(undefined4 *)(iVar3 + 0x3b6c);
        if (local_4c != fVar5) {
          local_4c = fVar5;
          func_00115DC8(&local_50);
        }
        fVar5 = DAT_0052e7a8;
        if (((*(uint *)(*(int *)(param_1 + 0x604) + 0x328) & 2) != 0) &&
           (*(char *)(*(int *)(param_1 + 0x604) + 0x33c) == '\f')) {
          fVar5 = DAT_0052e7ac;
        }
        func_00115D70(&local_24,&local_50,DAT_0052e7a8);
        local_40 = local_24;
        uStack_3c = uStack_20;
        uStack_38 = uStack_1c;
        func_00115C54(&local_24,(float *)(iVar3 + 0x3b40),&local_40);
        local_30 = local_24;
        uStack_2c = uStack_20;
        uStack_28 = uStack_1c;
        uVar2 = func_0052E454(param_1,&local_30,1,fVar5);
        if (uVar2 == 0) {
          return true;
        }
      }
    }
  }
  return false;
}

