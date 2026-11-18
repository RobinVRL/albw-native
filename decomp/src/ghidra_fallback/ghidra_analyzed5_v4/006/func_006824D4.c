#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern float DAT_0068267c;

// USA 006824D4 <- EU 006824AC (Ghidra, non-matching)
// GLOBAL DAT_0068267c float

undefined4 func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define iStack_6c (*(int *)(albw_frame + 0x4))
  #define iStack_68 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define iStack_50 (*(int *)(albw_frame + 0x20))
  #define iStack_4c (*(int *)(albw_frame + 0x24))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define iStack_3c (*(int *)(albw_frame + 0x34))
  #define iStack_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  fVar2 = DAT_0068267c;
  switch((short)param_1[0x15]) {
  case 1:
    piVar1 = param_1 + 1;
    param_1[1] = (int)ALBW_AS_U32(*param_4);
    param_1[2] = (int)ALBW_AS_U32(param_4[1]);
    fVar2 = param_4[2];
    goto LAB_006825c4;
  case 5:
    iVar3 = param_3[1];
    iVar4 = param_3[5];
    param_1[0x18] = param_3[9];
    param_1[0x16] = iVar3;
    param_1[0x17] = iVar4;
    break;
  case 6:
    param_1[1] = (int)ALBW_AS_U32(*param_4);
    param_1[2] = (int)ALBW_AS_U32(param_4[1]);
    param_1[3] = (int)ALBW_AS_U32(param_4[2]);
    param_1[0x16] = (int)ALBW_AS_U32((*param_2 * fVar2));
    break;
  case 7:
    param_1[1] = (int)ALBW_AS_U32(*param_4);
    param_1[2] = (int)ALBW_AS_U32(param_4[1]);
    param_1[3] = (int)ALBW_AS_U32(param_4[2]);
    fVar2 = param_2[1];
    fVar5 = param_2[2];
    param_1[0x16] = (int)ALBW_AS_U32(*param_2);
    param_1[0x17] = (int)ALBW_AS_U32(fVar2);
    param_1[0x18] = (int)ALBW_AS_U32(fVar5);
    break;
  case 8:
    param_1[1] = (int)ALBW_AS_U32(*param_4);
    param_1[2] = (int)ALBW_AS_U32(param_4[1]);
    param_1[3] = (int)ALBW_AS_U32(param_4[2]);
    func_001151D8(param_1 + 0x19,param_3);
    piVar1 = param_1 + 0x16;
    param_1[0x16] = (int)ALBW_AS_U32(*param_2);
    param_1[0x17] = (int)ALBW_AS_U32(param_2[1]);
    fVar2 = param_2[2];
LAB_006825c4:
    piVar1[2] = (int)ALBW_AS_U32(fVar2);
    break;
  case 9:
    local_34 = ALBW_AS_F32(param_3[1]);
    local_30 = param_3[5];
    local_2c = param_3[9];
    func_00115D70(&local_40,&local_34,param_2[1]);
    local_54 = local_40;
    iStack_50 = iStack_3c;
    iStack_4c = iStack_38;
    func_00115C54(&local_40,param_4,&local_54);
    iVar3 = iStack_38;
    fVar2 = local_40;
    iVar4 = iStack_3c;
    func_00115D70(&local_40,&local_34,param_2[1]);
    local_70 = local_40;
    iStack_6c = iStack_3c;
    iStack_68 = iStack_38;
    func_00115C70(&local_40,param_4,&local_70);
    param_1[0x16] = (int)ALBW_AS_U32(fVar2);
    param_1[0x17] = iVar4;
    param_1[0x18] = iVar3;
    param_1[0x19] = (int)ALBW_AS_U32(local_40);
    param_1[0x1a] = iStack_3c;
    param_1[0x1b] = iStack_38;
    param_1[0x1c] = (int)ALBW_AS_U32((*param_2 * DAT_0068267c));
  }
  return func_004356B4(param_1);
}

