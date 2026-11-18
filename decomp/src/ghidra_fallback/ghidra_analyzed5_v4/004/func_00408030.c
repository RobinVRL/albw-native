#include "ghidra_types.h"

extern int func_0011038C(int param_1);
extern int func_0040E8EC(void);
extern int func_0040E968(uint *param_1,uint param_2,int *param_3);
extern int func_0040F2E4(void);
extern int func_004129E0(undefined4 *param_1,undefined4 param_2,uint param_3);
extern int func_00412BB4(void);
extern int func_00412F58(void);
extern int func_00414FE8(int param_1);
extern int func_00414FF0(void);
extern int func_00415460(int param_1,int param_2,undefined4 param_3);
extern int func_004154B4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00417DE4(undefined4 *param_1,int param_2,int param_3);
extern int func_00417E24(void);
extern int func_00417EB8(undefined4 param_1,int param_2);
extern int func_00418020(char *param_1);
extern int func_004198AC(char *param_1,undefined4 *param_2,uint param_3);
extern int func_00419924(void);
extern int func_00419A74(undefined4 param_1,int param_2);
extern int func_0041BD4C(void);
extern int func_0041D614(void);
extern undefined1 *DAT_00408228;
extern char *DAT_0040822c;
extern int *DAT_00408230;

// USA 00408030 <- EU 00408010 (Ghidra, non-matching)
// GLOBAL DAT_00408228 undefined1 *
// GLOBAL DAT_0040822c char *
// GLOBAL DAT_00408230 int *

void func_00408030(int param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  
  puVar1 = DAT_00408228;
  if (DAT_00408228[1] == '\0') {
    func_00418020(DAT_0040822c);
    if (puVar1[2] == '\0') {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar11 = *(int *)(param_1 + 0x18);
      puVar4 = (undefined4 *)func_00412BB4();
      func_004129E0(puVar4,param_2,*(uint *)(param_1 + 0xc));
      puVar4 = (undefined4 *)func_00412F58();
      func_004129E0(puVar4,iVar3 + param_2,*(uint *)(param_1 + 0x18));
      param_2 = param_2 + iVar3 + iVar11;
      puVar1[2] = 1;
    }
    iVar3 = param_2;
    iVar11 = 0;
    if (*(char *)(param_1 + 0x1c) != '\0') {
      iVar3 = *(int *)(param_1 + 8) + param_2;
      iVar11 = param_2;
      if ((*(int *)(param_1 + 4) == 1) && (*(char *)(param_1 + 0x1e) != '\0')) {
        iVar3 = *(int *)(param_1 + 8) + iVar3;
      }
    }
    puVar4 = func_00414FF0();
    func_00414FE8((int)puVar4);
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar3);
    iVar5 = func_0040F2E4();
    func_0011038C(iVar5);
    piVar2 = DAT_00408230;
    iVar5 = *(int *)(param_1 + 0x14);
    *DAT_00408230 = iVar3;
    piVar2[1] = iVar5;
    puVar6 = func_00419924();
    iVar3 = func_00419A74(puVar6,*(int *)(puVar1 + 4));
    iVar3 = iVar3 + (int)puVar4;
    puVar6 = func_00419924();
    uVar7 = func_00419A74(puVar6,*(int *)(puVar1 + 4));
    pcVar8 = func_00419924();
    func_004198AC(pcVar8,puVar4,uVar7);
    puVar4 = func_00417E24();
    iVar5 = func_00417EB8(puVar4,*(int *)(puVar1 + 4));
    puVar4 = func_00417E24();
    iVar9 = func_00417EB8(puVar4,*(int *)(puVar1 + 4));
    puVar4 = func_00417E24();
    func_00417DE4(puVar4,iVar3,iVar9);
    func_0041BD4C();
    puVar10 = func_0040E8EC();
    func_0040E968(puVar10,*(uint *)(param_1 + 0x10),DAT_00408230);
    if (*(char *)(param_1 + 0x1c) != '\0') {
      puVar4 = func_00414FF0();
      func_004154B4((int)puVar4,iVar11,*(undefined4 *)(param_1 + 8),*(undefined4 *)param_1);
    }
    bVar12 = *(char *)(param_1 + 0x1d) != '\0';
    iVar11 = 0;
    if (bVar12) {
      iVar11 = *(int *)(param_1 + 0x20);
    }
    if (bVar12 && 0 < iVar11) {
      puVar4 = func_00414FF0();
      func_00415460((int)puVar4,iVar5 + iVar3,*(undefined4 *)(param_1 + 0x20));
    }
    func_0041D614();
    *puVar1 = *(undefined1 *)(param_1 + 0x1c);
    puVar1[1] = 1;
  }
  return;
}

