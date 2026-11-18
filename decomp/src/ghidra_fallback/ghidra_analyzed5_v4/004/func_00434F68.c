#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00433ABC(int *param_1,int *param_2,int param_3);

// USA 00434F68 <- EU 00434F48 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

void func_00434F68(int *param_1,int *param_2,int param_3,int param_4,float *param_5)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define afStack_24 ((float *)(albw_frame + 0x2c))
  func_00433ABC(param_1,param_2,param_3);
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_1[1] + 0xe);
  fVar4 = ALBW_AS_F32(param_1[6]);
  param_1[0x16] = (int)ALBW_AS_U32(fVar4);
  param_1[0x17] = (int)ALBW_AS_U32((fVar4 * fVar4));
  if ((param_4 == 0) || ((*(byte *)(param_4 + 0xa8) & 6) == 0)) {
    func_00115C54((float *)(param_1 + 7),param_5,(float *)(param_1 + 3));
    piVar1 = (int *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 6) * 0xc);
    param_1[10] = *piVar1;
    param_1[0xb] = piVar1[1];
    param_1[0xc] = piVar1[2];
    piVar1 = (int *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 8) * 0xc);
    param_1[0xd] = *piVar1;
    param_1[0xe] = piVar1[1];
    param_1[0xf] = piVar1[2];
    piVar1 = (int *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 10) * 0xc);
    param_1[0x10] = *piVar1;
    param_1[0x11] = piVar1[1];
    param_1[0x12] = piVar1[2];
    piVar1 = (int *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 0xc) * 0xc);
    param_1[0x13] = *piVar1;
    param_1[0x14] = piVar1[1];
    param_1[0x15] = piVar1[2];
    param_1[0x18] = *(int *)param_1[1];
    return;
  }
  func_00115CE4((float *)(param_1 + 7),(float *)(param_4 + 0x3c),(float *)(param_1 + 3));
  func_00115C54((float *)(param_1 + 7),(float *)(param_1 + 7),param_5);
  pfVar3 = (float *)(param_1 + 10);
  pfVar2 = (float *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 6) * 0xc);
  if ((*(byte *)(param_4 + 0xa8) & 6) == 0) {
    *pfVar3 = *pfVar2;
    param_1[0xb] = (int)ALBW_AS_U32(pfVar2[1]);
    param_1[0xc] = (int)ALBW_AS_U32(pfVar2[2]);
  }
  else {
    func_00115CE4(pfVar3,(float *)(param_4 + 0x84),pfVar2);
    func_00115DC8(pfVar3);
  }
  pfVar3 = (float *)(param_1 + 0xd);
  pfVar2 = (float *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 8) * 0xc);
  if ((*(byte *)(param_4 + 0xa8) & 6) == 0) {
    *pfVar3 = *pfVar2;
    param_1[0xe] = (int)ALBW_AS_U32(pfVar2[1]);
    param_1[0xf] = (int)ALBW_AS_U32(pfVar2[2]);
  }
  else {
    func_00115CE4(pfVar3,(float *)(param_4 + 0x84),pfVar2);
    func_00115DC8(pfVar3);
  }
  pfVar3 = (float *)(param_1 + 0x10);
  pfVar2 = (float *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 10) * 0xc);
  if ((*(byte *)(param_4 + 0xa8) & 6) == 0) {
    *pfVar3 = *pfVar2;
    param_1[0x11] = (int)ALBW_AS_U32(pfVar2[1]);
    param_1[0x12] = (int)ALBW_AS_U32(pfVar2[2]);
  }
  else {
    func_00115CE4(pfVar3,(float *)(param_4 + 0x84),pfVar2);
    func_00115DC8(pfVar3);
  }
  pfVar3 = (float *)(param_1 + 0x13);
  pfVar2 = (float *)(*(int *)(*param_1 + 4) + (uint)*(ushort *)(param_1[1] + 0xc) * 0xc);
  if ((*(byte *)(param_4 + 0xa8) & 6) == 0) {
    *pfVar3 = *pfVar2;
    param_1[0x14] = (int)ALBW_AS_U32(pfVar2[1]);
    param_1[0x15] = (int)ALBW_AS_U32(pfVar2[2]);
  }
  else {
    func_00115CE4(pfVar3,(float *)(param_4 + 0x84),pfVar2);
    func_00115DC8(pfVar3);
  }
  if ((*(byte *)(param_4 + 0xa8) & 2) != 0) {
    func_00115D70(&local_30,
                  (float *)(*(int *)(*param_1 + 4) +
                           (uint)*(ushort *)((float *)param_1[1] + 3) * 0xc),*(float *)param_1[1]);
    local_3c = local_30;
    fStack_38 = local_2c;
    fStack_34 = local_28;
    func_00115C54(&local_30,&local_3c,(float *)(param_1 + 3));
    local_50 = local_30;
    local_4c = local_2c;
    local_48 = local_28;
    func_00115CE4(afStack_24,(float *)(param_4 + 0x3c),&local_50);
    func_00115C54(afStack_24,afStack_24,param_5);
    func_00115C70(&local_30,afStack_24,(float *)(param_1 + 7));
    param_1[0x18] =
         (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x13]) * local_30 + ALBW_AS_F32(param_1[0x14]) * local_2c +
              ALBW_AS_F32(param_1[0x15]) * local_28));
    return;
  }
  param_1[0x18] = (int)ALBW_AS_U32((*(float *)(param_4 + 4) * *(float *)param_1[1]));
  return;
}

