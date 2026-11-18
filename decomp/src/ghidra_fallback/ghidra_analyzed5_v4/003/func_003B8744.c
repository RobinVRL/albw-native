#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7634(int param_1);
extern int func_002B89F0(int param_1);
extern int func_002B9ED0(int param_1,short param_2);
extern int func_002D4054(int param_1);
extern int func_00383DF8(int param_1,int param_2);
extern int func_00384090(int param_1,int param_2);
extern int func_0038428C(int param_1,undefined2 param_2,int param_3);
extern int func_0039699C(int *param_1);
extern int func_003A34E4(int param_1);
extern int func_003B1110(int param_1);
extern int func_004FB3A0(int param_1);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b8a20;
extern int DAT_003b8a24;
extern float DAT_003b8a28;
extern undefined4 DAT_003b8a2c;

// USA 003B8744 <- EU 003B8720 (Ghidra, non-matching)
// GLOBAL DAT_003b8a20 undefined4
// GLOBAL DAT_003b8a24 int
// GLOBAL DAT_003b8a28 float
// GLOBAL DAT_003b8a2c undefined4

undefined4 func_003B8744(int *param_1)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  uVar9 = DAT_003b8a20;
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1[0x12] + 0x918) = 0;
  *(undefined4 *)(param_1[0x12] + 0x3e0) = uVar9;
  iVar7 = *(int *)(param_1[0x12] + 0x510);
  if (*(char *)(iVar7 + 4) == '\0') {
    bVar1 = *(byte *)(iVar7 + 5);
    bVar8 = false;
    if (((bVar1 == 0xc) || (bVar1 == 0xd)) || ((0x14 < bVar1 && (bVar1 < 0x1d)))) {
      func_002B9ED0(param_1[0x12],2);
      iVar7 = param_1[0x12];
      if (*(short *)(DAT_003b8a24 + iVar7) < 1) {
        cVar2 = *(char *)(iVar7 + 0x1488);
        bVar8 = cVar2 != '\x12';
        if (bVar8) {
          cVar2 = *(char *)(iVar7 + 0x1489);
        }
        if (bVar8 && cVar2 != '\x12') {
                    /* WARNING: Could not recover jumptable at 0x003b87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          return (**(code **)(*param_1 + 0x138))(param_1,4,1);
        }
        func_003A34E4(iVar7 + 0xbc8);
      }
      func_004FB3A0(param_1[0x12]);
      iVar7 = param_1[0x12];
      bVar8 = true;
      *(undefined4 *)(iVar7 + 0x3dc) = uVar9;
      *(undefined4 *)(iVar7 + 0x3e0) = uVar9;
      *(undefined4 *)(iVar7 + 0x3e4) = uVar9;
      func_00383DF8(param_1[0x12] + 0x8c0,0);
      func_002B89F0(param_1[0x12]);
      func_00384090(param_1[0x12] + 0x8c0,1);
      iVar7 = func_00543170(param_1[0x12]);
      if (iVar7 == 0) {
        func_002D4054(param_1[0x12] + 0xa6c);
      }
      fVar3 = DAT_003b8a28;
      iVar7 = param_1[0x12];
      *(undefined1 *)(iVar7 + 0x936) = 1;
      *(undefined4 *)(iVar7 + 0x368) = *(undefined4 *)(iVar7 + 0x940);
      *(float *)(iVar7 + 0x36c) = *(float *)(iVar7 + 0x944) + fVar3;
      *(undefined4 *)(iVar7 + 0x370) = *(undefined4 *)(iVar7 + 0x948);
      *(undefined4 *)(iVar7 + 0x3d8) = *(undefined4 *)(iVar7 + 0x948);
      *(undefined4 *)(iVar7 + 0x3d0) = *(undefined4 *)(iVar7 + 0x940);
      *(undefined4 *)(iVar7 + 0x3d4) = *(undefined4 *)(iVar7 + 0x944);
      func_0038428C(param_1[0x12] + 0x8c0,0x3c,0);
      uVar4 = DAT_003b8a2c;
      iVar7 = *(int *)(param_1[0x12] + 0x510);
      *(undefined4 *)(iVar7 + 0x48) = DAT_003b8a2c;
      *(undefined4 *)(iVar7 + 0x4c) = uVar4;
      *(undefined4 *)(iVar7 + 0x50) = uVar4;
      iVar7 = param_1[0x12];
      *(undefined4 *)(iVar7 + 0x4e4) = uVar4;
      *(undefined4 *)(iVar7 + 0x4e8) = uVar4;
      *(undefined4 *)(iVar7 + 0x4ec) = uVar4;
      iVar7 = param_1[0x12];
      *(undefined4 *)(iVar7 + 0xa2c) = uVar9;
      *(undefined4 *)(iVar7 + 0xa30) = uVar9;
      *(undefined4 *)(iVar7 + 0xa34) = uVar9;
      *(undefined1 *)(param_1[0x12] + 0xb3f) = 1;
      iVar7 = param_1[0x12];
      *(undefined4 *)(iVar7 + 0x3dc) = uVar9;
      *(undefined4 *)(iVar7 + 0x3e0) = uVar9;
      *(undefined4 *)(iVar7 + 0x3e4) = uVar9;
      *(undefined4 *)(iVar7 + 0xa2c) = uVar9;
      *(undefined4 *)(iVar7 + 0xa30) = uVar9;
      *(undefined4 *)(iVar7 + 0xa34) = uVar9;
      *(undefined2 *)(param_1[0x12] + 0xafe) = 0x3c;
      (**(code **)(*param_1 + 0x138))(param_1,2,1);
      iVar7 = param_1[0x12];
      *(undefined1 *)(iVar7 + 0x935) = 3;
      func_002B7634(iVar7);
    }
    iVar7 = param_1[0x12];
    bVar1 = *(byte *)(*(int *)(iVar7 + 0x510) + 5);
    if (bVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x003b89e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,7,1);
    }
    if ((((bVar1 == 2) ||
         ((((4 < bVar1 && (bVar1 < 10)) || (bVar1 == 10)) || ((0xd < bVar1 && (bVar1 < 0x12)))))) ||
        (bVar1 == 0x13 || bVar1 == 0x1f)) && (bVar1 != 5)) {
      if (((bVar1 < 5) || (9 < bVar1)) && (bVar1 != 10)) {
        func_0038428C(iVar7 + 0x8c0,0x3c,1);
      }
      else {
        func_0038428C(iVar7 + 0x8c0,0x3c,0);
      }
    }
    if (!bVar8) {
      puVar5 = (uint *)func_0058A7D4();
      uVar6 = func_00111A64(puVar5);
      if ((0x1d < (uint)((ulonglong)uVar6 * 0x65 >> 0x20)) ||
         (iVar7 = func_003B1110((int)param_1), iVar7 == 0)) {
        if ((*(uint *)(param_1[0x12] + 0x938) & 0x40) == 0) {
          bVar8 = func_0039699C((int *)(param_1[0x12] + 0xb48));
          if (bVar8) {
            (**(code **)(*param_1 + 0x138))(param_1,2);
            param_1[0x13] = 0;
            iVar7 = param_1[0x12];
            *(undefined1 *)(iVar7 + 0x935) = 3;
            func_002B7634(iVar7);
          }
          else {
            (**(code **)(*param_1 + 0x138))(param_1,1,1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x138))(param_1,1);
          param_1[0x13] = 0x78;
          *(undefined1 *)(param_1[0x12] + 0x935) = 0;
        }
      }
    }
    *(undefined1 *)(param_1[0x12] + 0xb3f) = 1;
  }
  return 0;
}

