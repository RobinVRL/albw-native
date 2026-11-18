#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined8 func_00323DFC(char *param_1,int param_2,int *param_3);
extern undefined8 func_00324030(char *param_1,uint param_2,uint *param_3);
extern int func_003242F8(int param_1,float *param_2);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern int func_0043672C(int param_1,undefined4 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D020(undefined4 *param_1,undefined4 *param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00521A50(int param_1);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_00157358;
extern undefined4 DAT_0015735c;
extern float DAT_00157360;
extern float DAT_00157364;
extern float DAT_00157368;
extern int *DAT_0015736c;

// USA 00157038 <- EU 0015703C (Ghidra, non-matching)
// GLOBAL DAT_00157358 undefined4
// GLOBAL DAT_0015735c undefined4
// GLOBAL DAT_00157360 float
// GLOBAL DAT_00157364 float
// GLOBAL DAT_00157368 float
// GLOBAL DAT_0015736c int *

undefined4 func_00157038(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  undefined4 uVar4;
  
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  }
  if (*(char *)(param_1 + 0xa28) == '\0') {
    *(undefined4 *)(param_1 + 0x9fc) = DAT_0015735c;
  }
  else {
    *(undefined4 *)(param_1 + 0x9fc) = DAT_00157358;
  }
  iVar2 = func_003243A8((char *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),
                        (float *)(param_1 + 0x3dc));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xa00) == '\0') {
      func_003242F8(param_1 + 0x8f0,&local_48);
      iVar2 = func_0068C690(&local_48);
      func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_00157368);
    }
    else {
      fVar7 = DAT_00157360;
      func_0036CF20(*(undefined4 **)(param_1 + 0xa04));
      iVar2 = 0;
      fVar6 = DAT_00157364;
      do {
        iVar5 = (int)(char)((char)iVar2 * '\x02' + '\x01');
        local_48 = 0.0;
        func_00323DFC((char *)(param_1 + 0x8f0),iVar5,(int *)&local_48);
        if ((*(char *)(param_1 + 0x8e0) != iVar2) && (local_48 == 0.0)) {
          func_0036CF2C(*(uint **)(param_1 + 0xa04),iVar5,fVar6);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if (**(int **)(param_1 + 0xa04) < 1) {
        puVar3 = (uint *)func_0058A7D4();
        uVar8 = func_00324030((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar3);
        uVar1 = (undefined1)uVar8;
      }
      else {
        puVar3 = (uint *)func_0058A7D4();
        uVar4 = func_0036CE40(*(int **)(param_1 + 0xa04),puVar3);
        uVar1 = (undefined1)uVar4;
      }
      *(undefined1 *)(param_1 + 0x8e0) = uVar1;
      *(undefined1 *)(param_1 + 0xa00) = 0;
      fVar6 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                   *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
      local_48 = fVar7;
      local_44 = fVar7;
      local_40 = fVar7;
      func_0043672C((int)*(char *)(param_1 + 0x8e0),&local_48);
      func_00115D70(&local_30,&local_48,fVar6);
      local_3c = local_30;
      uStack_38 = uStack_2c;
      uStack_34 = uStack_28;
      func_0051D020((undefined4 *)(param_1 + 0x3dc),&local_3c);
    }
  }
  else {
    fVar7 = DAT_00157360;
    puVar3 = (uint *)func_0058A7D4();
    uVar8 = func_00324030((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar3);
    *(char *)(param_1 + 0x8e0) = (char)uVar8;
    *(undefined1 *)(param_1 + 0xa00) = 0;
    fVar6 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
    local_48 = fVar7;
    local_44 = fVar7;
    local_40 = fVar7;
    func_0043672C((int)uVar8,&local_48);
    func_00115D70(&local_30,&local_48,fVar6);
    local_3c = local_30;
    uStack_38 = uStack_2c;
    uStack_34 = uStack_28;
    func_0051D020((undefined4 *)(param_1 + 0x3dc),&local_3c);
  }
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      iVar2 = func_00521A50(param_1);
      if (iVar2 == 0) {
        return func_004FABDC(param_1,2,4,0);
      }
      func_00115C70(&local_48,*(float **)(*DAT_0015736c + 0x1c),(float *)(param_1 + 0x3d0));
      iVar2 = func_0068C690(&local_48);
      *(int *)(param_1 + 0xa20) = iVar2;
      *(undefined4 *)(param_1 + 0xa2c) = 7;
      return func_00657FA0((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa2c) = 3;
    func_00657FA0((undefined4 *)(param_1 + 0x8bc),2);
  }
  return 0;
}

