#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_004E2668(int param_1,float *param_2);
extern int func_00539200(int param_1);
extern int func_0066A794(undefined4 *param_1,undefined1 param_2);
extern int DAT_004e2578;
extern undefined4 DAT_004e257c;
extern int DAT_004e2580;
extern undefined4 DAT_004e2584;
extern float DAT_004e2588;
extern float DAT_004e258c;

// USA 004E23AC <- EU 004E2384 (Ghidra, non-matching)
// GLOBAL DAT_004e2578 int
// GLOBAL DAT_004e257c undefined4
// GLOBAL DAT_004e2580 int
// GLOBAL DAT_004e2584 undefined4
// GLOBAL DAT_004e2588 float
// GLOBAL DAT_004e258c float

undefined4 func_004E23AC(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  float in_s1;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_90 ((undefined4 *)(albw_frame + 0x0))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define iStack_84 (*(int *)(albw_frame + 0xc))
  #define iStack_80 (*(int *)(albw_frame + 0x10))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define iStack_74 (*(int *)(albw_frame + 0x1c))
  #define iStack_70 (*(int *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define iStack_68 (*(int *)(albw_frame + 0x28))
  #define iStack_64 (*(int *)(albw_frame + 0x2c))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(undefined4 *)(albw_frame + 0x6c))
  *(char *)((int)param_1 + 0x393) = (char)((*(ushort *)(param_4 + 0x20) & 0x7e0) >> 5);
  *param_2 = 1;
  if (param_3 == 4) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  else {
    if (param_3 == 0) {
      local_6c = ALBW_AS_F32(param_1[0xf7]);
      iStack_68 = param_1[0xf8];
      iStack_64 = param_1[0xf9];
      iVar3 = DAT_004e2578;
      func_00115DC8(&local_6c);
      func_00115D70(&local_78,&local_6c,*(float *)(param_4 + 0x1c));
      local_88 = local_78;
      iStack_84 = iStack_74;
      iStack_80 = iStack_70;
      func_00115C70(&local_78,(float *)(param_1 + 0xf4),&local_88);
      param_1[0xf4] = (int)ALBW_AS_U32(local_78);
      param_1[0xf5] = iStack_74;
      param_1[0xf6] = iStack_70;
      param_1[0x135] = (int)ALBW_AS_U32(local_78);
      param_1[0x136] = iStack_74;
      param_1[0x137] = iStack_70;
      func_0066A794(param_1 + 0x108,4);
      param_1[0xf7] = iVar3;
      param_1[0xf8] = iVar3;
      param_1[0xf9] = iVar3;
      return 0;
    }
    if (param_3 == 1) {
      *param_2 = 0;
    }
    else {
      if (param_3 == 2) {
        return func_0066A794(param_1 + 0x108,2);
      }
      if (param_3 == 3) {
        func_004E2668((int)param_1,(float *)(param_4 + 4));
        func_0066A794(param_1 + 0x108,5);
        iVar3 = DAT_004e2580;
        local_24 = DAT_004e257c;
        local_28 = DAT_004e2580;
        func_001509A4((int)param_1,&local_28,0);
        func_0010A464(auStack_90);
        local_24 = DAT_004e2584;
        local_28 = iVar3;
        func_00150A84(param_1,&local_28,(int)auStack_90);
        bVar2 = func_00539200((int)auStack_90);
        sVar1 = 0;
        if (bVar2) {
          sVar1 = (short)param_1[0xb];
        }
        if ((bVar2 && sVar1 != 0) && sVar1 != 4) {
          if (sVar1 == 1) {
            func_0025B860((int)auStack_90,0,DAT_004e258c,in_s1);
          }
          else {
            func_0025B860((int)auStack_90,0,DAT_004e2588,in_s1);
          }
        }
        return func_0025B874(auStack_90);
      }
      if (param_3 == 5) {
        iVar3 = DAT_004e2578;
        func_0066A794(param_1 + 0x108,3);
        param_1[0xf7] = iVar3;
        param_1[0xf8] = iVar3;
        param_1[0xf9] = iVar3;
      }
    }
  }
  return 0;
}

