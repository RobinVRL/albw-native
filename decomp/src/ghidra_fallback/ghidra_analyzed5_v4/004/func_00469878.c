#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_00469774(int param_1);
extern float DAT_00469ac4;
extern float DAT_00469ac8;
extern float DAT_00469acc;
extern float DAT_00469ad0;

// USA 00469878 <- EU 00469850 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_00469ac4 float
// GLOBAL DAT_00469ac8 float
// GLOBAL DAT_00469acc float
// GLOBAL DAT_00469ad0 float

void func_00469878(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined1 param_5
                  )

{
  char cVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  float in_s0;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x74),1);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
    if (param_2 == 0) {
      in_s0 = DAT_00469ac4;
    }
    *(undefined2 *)(param_1 + 0x46) = 5;
    *(undefined2 *)(param_1 + 0x44) = 5;
    if (((param_2 != 0) && (in_s0 = DAT_00469ac8, param_2 != 1)) &&
       (in_s0 = DAT_00469acc, param_2 != 2)) {
      in_s0 = DAT_00469ad0;
    }
    func_002316CC(param_1 + 0x44,in_s0);
    break;
  case 4:
    piVar4 = (int *)(param_1 + 0x70);
    goto LAB_00469910;
  case 5:
  case 6:
  case 7:
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x6c),1);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x46) = 4;
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (param_2 == 5) {
code_r0x004699f4:
      func_00231524(param_1 + 0x44);
      break;
    }
    if (param_2 == 6) {
      func_002317C0((undefined2 *)(param_1 + 0x44),DAT_00469ac4);
      fVar2 = DAT_00469ac8;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if ((uint)(int)*(short *)(param_1 + 0x46) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
        iVar3 = iVar3 + *(short *)(param_1 + 0x46) * 0x38;
      }
      *(float *)(iVar3 + 0x14) = DAT_00469ac8;
      *(float *)(*(int *)(iVar3 + 0x10) + 0x10) = fVar2;
      break;
    }
    goto code_r0x00469a08;
  case 8:
  case 9:
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x68),1);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x46) = 3;
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (param_2 != 8) goto code_r0x004699f4;
code_r0x00469a08:
    func_002313DC(param_1 + 0x44);
    break;
  case 10:
    piVar4 = (int *)(param_1 + 0x78);
LAB_00469910:
    func_00167E04(*(int *)(param_1 + 0x1c),*piVar4,1);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)(param_1 + 0x20) = 0;
    break;
  case 0xb:
    piVar4 = (int *)(param_1 + 0x7c);
    goto LAB_00469a24;
  case 0xc:
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x80),1);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x22) = 7;
    *(undefined2 *)(param_1 + 0x20) = 0;
    break;
  case 0xd:
    piVar4 = (int *)(param_1 + 0x84);
LAB_00469a24:
    func_00167E04(*(int *)(param_1 + 0x1c),*piVar4,1);
  }
  func_0023194C(param_1 + 0x20,0);
  *(char *)(param_1 + 0x88) = (char)param_2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  uVar5 = param_3[1];
  *(undefined4 *)(param_1 + 0x8c) = *param_3;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  func_00469774(param_1);
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  *(undefined1 *)(param_1 + 0xa4) = param_5;
  cVar1 = *(char *)(param_1 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar6 && cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}

