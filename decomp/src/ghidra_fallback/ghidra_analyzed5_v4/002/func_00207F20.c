#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0020B820(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_0020814c;
extern int DAT_00208150;
extern float DAT_00208154;
extern int DAT_00208158;
extern int *DAT_0020815c;
extern undefined *DAT_00208160;
extern undefined4 DAT_00208164;
extern int DAT_00208168;
extern float DAT_0020816c;
extern int DAT_00208170;

// USA 00207F20 <- EU 00207F20 (Ghidra, non-matching)
// GLOBAL DAT_0020814c float
// GLOBAL DAT_00208150 int
// GLOBAL DAT_00208154 float
// GLOBAL DAT_00208158 int
// GLOBAL DAT_0020815c int *
// GLOBAL DAT_00208160 undefined *
// GLOBAL DAT_00208164 undefined4
// GLOBAL DAT_00208168 int
// GLOBAL DAT_0020816c float
// GLOBAL DAT_00208170 int

undefined4 func_00207F20(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_00208150;
  fVar4 = DAT_0020814c;
  if (*(char *)(param_1[0x144] + 4) != '\x12') {
    param_1[0x326] = (int)ALBW_AS_U32(DAT_0020814c);
    func_0051D2F4(param_1 + 0x278,0,iVar1,0x7fffffff,DAT_00208154);
  }
  if (*(char *)(param_1[0x144] + 4) == '\0') {
    piVar3 = param_1 + 0x22f;
    if (0 < *(short *)(DAT_00208158 + (int)param_1)) {
      if ((char)param_1[0x2e9] == '\0') {
        if (*(short *)(DAT_00208158 + (int)param_1) < 0xa1) {
          func_004FB070((int)param_1,DAT_0020816c);
          func_004FB4C4((int)param_1,fVar4);
          func_0065D630(piVar3,0xb);
          *(undefined1 *)(param_1 + 0x2e9) = 1;
          return 0;
        }
        fVar4 = DAT_0020816c;
        puVar2 = (uint *)func_002C11E8(&local_78,1,10,0);
        func_0016898C(param_1[0x239],puVar2);
        *(float *)(*(int *)(param_1[0x239] + 0x14) + 0x10) = fVar4;
        iVar1 = DAT_00208170;
        if ((param_1[0x2eb] != 0) && ((param_1[0x2eb] & 1U) == 0)) {
          param_1[0x2ed] = 600;
          param_1[0x2ee] = iVar1;
          param_1[0x2ec] = 0;
        }
        return func_0020B820((int)param_1,0);
      }
      if (*(char *)(param_1[0x144] + 5) == '\x12') {
        if ((ALBW_AS_F32(param_1[0x325]) == fVar4) &&
           (uVar5 = func_0058A474(param_1,0x28), (int)uVar5 != 0)) {
          return func_0065D630(piVar3,0x1b);
        }
      }
      else if (2 < (uint)param_1[0x2e4]) {
        func_0065D630(piVar3,0x15);
        local_78 = DAT_00208168;
        local_74 = DAT_00208164;
        param_1[0x2f2] = 0;
        func_00150A84(param_1,&local_78,0);
        param_1[0x2e4] = 0;
        return 0;
      }
      return func_0065D630(piVar3,0x10);
    }
    func_0052FD7C(*DAT_0020815c + 0x3dbbc,DAT_00208160,0);
    func_0065D630(piVar3,0x2c);
  }
  return 0;
}

