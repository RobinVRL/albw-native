#include "ghidra_types.h"

extern int func_00111EE4(int param_1,int param_2);
extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_00407CEC(int param_1);
extern int func_0040E7F4(int param_1);
extern int func_0040F1C4(int param_1,int param_2,int param_3);
extern int func_0040F2E4(void);
extern int func_00414FF0(void);
extern int func_00418BDC(uint param_1);
extern int func_00418D38(int param_1);
extern int func_0041C81C(void);
extern int func_0041C870(int *param_1,int param_2);

// USA 0041900C <- EU 00418FEC (Ghidra, non-matching)

undefined4 func_0041900C(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    iVar9 = *(int *)(param_1 + 0xa4);
    if (iVar9 == 0) {
      return 0;
    }
    if (*(int *)(iVar9 + 0x14) == 0) {
      return 0;
    }
    puVar3 = *(undefined4 **)(iVar9 + 0x18);
    func_003E696C((int *)(iVar9 + 0x14),puVar3);
    if (puVar3 + -0x11 == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 **)(param_1 + 0xa8) = puVar3 + -0x11;
    *(undefined1 *)(param_1 + 0xa0) = 2;
    *(undefined1 *)(puVar3 + -0xc) = 0;
    puVar3[-3] = 0;
    puVar3[-4] = 0;
    *(undefined1 *)(puVar3 + -1) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0xac);
    uVar6 = *(undefined4 *)(param_1 + 0xb0);
    uVar7 = *(undefined4 *)(param_1 + 0xb4);
    uVar8 = *(undefined4 *)(param_1 + 0xb8);
    uVar10 = *(undefined4 *)(param_1 + 0xbc);
    uVar11 = *(undefined4 *)(param_1 + 0xc0);
    puVar3[-2] = 0;
    puVar3[-10] = uVar2;
    puVar3[-9] = uVar6;
    puVar3[-8] = uVar7;
    puVar3[-7] = uVar8;
    puVar3[-6] = uVar10;
    puVar3[-5] = uVar11;
LAB_0041907c:
    iVar9 = *(int *)(param_1 + 0xa8);
    if (*(int *)(iVar9 + 0x3c) == 0) {
      puVar3 = func_00407CEC(*(int *)(iVar9 + 0x24));
      *(undefined4 **)(iVar9 + 0x3c) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      func_0040E7F4((int)puVar3);
    }
    cVar1 = *(char *)(iVar9 + 0x14);
    if (cVar1 == '\0') {
      iVar5 = func_0040F2E4();
      return func_0040F1C4(iVar5,iVar9,1);
    }
    if (cVar1 != '\x03' && cVar1 != '\x04') {
      return 0;
    }
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x40) != '\0') {
      uVar13 = *(undefined8 *)(*(int *)(param_1 + 0xa8) + 0x34);
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xf) = 1;
        if (*(char *)(param_1 + 0xa2) != '\0') {
          puVar3 = func_00414FF0();
          func_00111EE4((int)puVar3,param_1 + 0x50);
          *(undefined1 *)(param_1 + 0xa2) = 0;
        }
        if (*(char *)(param_1 + 0xd) != '\0') {
          *(undefined1 *)(param_1 + 0xd) = 0;
        }
      }
      *(undefined1 *)(param_1 + 0xa0) = 3;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(int *)(param_1 + 100) = (int)uVar13;
      *(int *)(param_1 + 0x68) = (int)((ulonglong)uVar13 >> 0x20);
      piVar4 = func_0041C81C();
      func_0041C870(piVar4,param_1 + 0x44);
      goto LAB_00419148;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      puVar3 = func_00414FF0();
      func_00111EE4((int)puVar3,param_1 + 0x50);
      *(undefined1 *)(param_1 + 0xa2) = 0;
    }
    cVar1 = *(char *)(param_1 + 0xd);
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\x02') goto LAB_0041907c;
LAB_00419148:
    bVar12 = *(char *)(param_1 + 0xc) == '\0';
    cVar1 = '\0';
    if (!bVar12) {
      cVar1 = *(char *)(param_1 + 0xd);
    }
    if (bVar12 || cVar1 == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
LAB_0041921c:
      return func_00418D38(param_1);
    }
    if (*(char *)(param_1 + 0x5c) == '\0') {
      iVar9 = func_00418BDC(param_1);
      if (iVar9 != 0) goto LAB_0041921c;
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) != '\0') {
        puVar3 = func_00414FF0();
        func_00111EE4((int)puVar3,param_1 + 0x50);
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
      cVar1 = *(char *)(param_1 + 0xd);
    }
    else {
      if (*(int *)(param_1 + 0x9c) != 0) goto LAB_0041921c;
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) == '\0') goto LAB_0041925c;
      puVar3 = func_00414FF0();
      func_00111EE4((int)puVar3,param_1 + 0x50);
      *(undefined1 *)(param_1 + 0xa2) = 0;
      cVar1 = *(char *)(param_1 + 0xd);
    }
  }
  if (cVar1 == '\0') {
    return 0;
  }
LAB_0041925c:
  *(undefined1 *)(param_1 + 0xd) = 0;
  return 0;
}

