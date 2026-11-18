#include "ghidra_types.h"

extern int func_00100658(uint *param_1,undefined4 param_2,int param_3,int param_4);
extern int func_00111A14(void);
extern int func_001145C0(int param_1,uint param_2);
extern int func_00300028(uint *param_1);
extern int func_00300054(uint *param_1);
extern undefined8 func_003000A4(uint param_1);
extern int func_0030085A(uint *param_1,char *param_2,uint *param_3,uint param_4,uint param_5);

// USA 003009F4 <- EU 003009D0 (Ghidra, function missing from the decomp table)

undefined4 func_003009F4(uint *param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  code *pcVar7;
  uint unaff_r6;
  char *pcVar8;
  undefined8 uVar9;
  #define in_stack_ffffffa0 (*(int *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_57 ((char *)(albw_frame + 0x9))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(uint *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  #define local_24 (*(int *)(albw_frame + 0x3c))
  #define local_20 (*(uint *)(albw_frame + 0x40))
  #define local_1c (*(uint *)(albw_frame + 0x44))
  #define local_18 (*(int *)(albw_frame + 0x48))
  puVar5 = (uint *)(param_3 + 7U & 0xfffffff8);
  local_30 = *puVar5;
  local_2c = puVar5[1];
  uVar3 = func_001145C0(local_30,local_2c);
  if ((int)local_2c < 0) {
    local_24 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    local_24 = 0x2b;
  }
  else {
    local_24 = ((*param_1 << 0x1d) >> 0x1f) << 5;
  }
  if ((uVar3 == 3) || (6 < (int)uVar3)) {
    func_00100658(param_1,param_2,uVar3,local_24);
    return 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar3 = param_1[7];
  }
  else {
    uVar3 = 6;
  }
  if (param_2 == 0x65) {
    if ((int)uVar3 < 0x11) {
      uVar6 = uVar3 + 1;
    }
    else {
      uVar6 = 0x11;
    }
    func_0030085A(&local_20,local_57 + 3,&local_30,uVar6,0);
    param_2 = uVar3 + 1;
    local_28 = local_1c;
  }
  else {
    if (param_2 == 0x66) {
      local_34 = (char *)0x80000000;
      func_0030085A(&local_20,local_57 + 3,&local_30,uVar3,1);
      unaff_r6 = 0;
      local_28 = local_1c;
      param_2 = local_1c;
      if (local_18 == 0) {
        param_2 = local_20 + uVar3 + 1;
      }
      if (-1 < (int)(uVar3 - param_2)) {
        unaff_r6 = 0xffffffff - (uVar3 - param_2);
        param_2 = uVar3 + 1;
      }
      in_stack_ffffffa0 = param_2 - uVar3;
      goto LAB_00300b08;
    }
    if (param_2 != 0x67) goto LAB_00300b08;
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    uVar6 = uVar3;
    if (0x11 < (int)uVar3) {
      uVar6 = 0x11;
    }
    func_0030085A(&local_20,local_57 + 3,&local_30,uVar6,0);
    unaff_r6 = 0;
    local_28 = local_1c;
    param_2 = uVar3;
    if (-1 < (int)(*param_1 << 0x1c)) {
      if ((int)local_1c < (int)uVar3) {
        param_2 = local_1c;
      }
      for (; (1 < (int)param_2 && (local_57[param_2 + 2] == '0')); param_2 = param_2 - 1) {
      }
    }
    if (((int)local_20 < (int)uVar3) && (-5 < (int)local_20)) {
      if ((int)local_20 < 1) {
        param_2 = param_2 - local_20;
        unaff_r6 = local_20;
      }
      else if ((int)param_2 < (int)(local_20 + 1)) {
        param_2 = local_20 + 1;
      }
      in_stack_ffffffa0 = (local_20 - unaff_r6) + 1;
      local_34 = (char *)0x80000000;
      goto LAB_00300b08;
    }
  }
  unaff_r6 = 0;
  in_stack_ffffffa0 = 1;
  local_34 = (char *)local_20;
  local_28 = local_1c;
LAB_00300b08:
  if ((-1 < (int)(*param_1 << 0x1c)) && ((int)param_2 <= in_stack_ffffffa0)) {
    in_stack_ffffffa0 = -1;
  }
  local_57[2] = 0;
  pcVar8 = local_57 + 2;
  if (local_34 != (char *)0x80000000) {
    local_20 = 2;
    local_1c = 0x2b;
    if ((int)local_34 < 0) {
      local_34 = (char *)-(int)local_34;
      local_1c = 0x2d;
    }
    while ((uVar3 = local_20, local_20 = local_20 - 1, 0 < (int)uVar3 || (local_34 != (char *)0x0)))
    {
      uVar9 = func_003000A4((uint)local_34);
      pcVar8 = pcVar8 + -1;
      *pcVar8 = (char)((ulonglong)uVar9 >> 0x20) + '0';
      local_34 = (char *)uVar9;
    }
    pcVar8[-1] = (char)local_1c;
    if ((int)(*param_1 << 0x14) < 0) {
      cVar2 = 'E';
    }
    else {
      cVar2 = 'e';
    }
    pcVar8 = pcVar8 + -2;
    *pcVar8 = cVar2;
  }
  local_34 = local_57 + (2 - (int)pcVar8);
  param_1[6] = (param_1[6] -
               (int)(local_57 + (2 - (int)pcVar8) +
                    (local_24 != 0) + param_2 + (in_stack_ffffffa0 >> 0x1f))) - 1;
  if (-1 < (int)(*param_1 << 0x1b)) {
    func_00300028(param_1);
  }
  if (local_24 != 0) {
    (*(code *)param_1[1])(local_24,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    func_00300028(param_1);
  }
  while (uVar3 = param_2 - 1, 0 < (int)param_2) {
    if (((int)unaff_r6 < 0) || ((int)local_28 <= (int)unaff_r6)) {
      pcVar7 = (code *)param_1[1];
      uVar6 = param_1[2];
      cVar2 = '0';
    }
    else {
      pcVar7 = (code *)param_1[1];
      cVar2 = local_57[unaff_r6 + 3];
      uVar6 = param_1[2];
    }
    (*pcVar7)(cVar2,uVar6);
    unaff_r6 = unaff_r6 + 1;
    param_1[8] = param_1[8] + 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
    param_2 = uVar3;
    if (in_stack_ffffffa0 == 0) {
      iVar4 = func_00111A14();
      (*(code *)param_1[1])
                (*(undefined1 *)((int)*(int **)(iVar4 + 0xc) + **(int **)(iVar4 + 0xc)),param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  while (pcVar1 = local_34, local_34 = local_34 + -1, 0 < (int)pcVar1) {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    (*(code *)param_1[1])(cVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  func_00300054(param_1);
  return 2;
}

