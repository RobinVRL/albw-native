#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_0028D7B4(int param_1);
extern int func_002908B8(int param_1);
extern int func_002D5320(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00362834(undefined1 *param_1);
extern int func_003772FC(int param_1);
extern int func_004B083C(void);
extern int func_0052E454(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0052EE58(void);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0028f7b0;
extern int *DAT_0028f7b4;
extern uint *DAT_0028f7b8;
extern int *DAT_0028f7bc;
extern float DAT_0028f7c0;
extern uint *DAT_0028f7c4;
extern undefined4 *DAT_0028f7c8;
extern undefined4 DAT_0028f7cc;
extern undefined4 DAT_0028f7d0;
extern undefined4 DAT_0028f7d4;

// USA 0028F370 <- EU 0028F398 (Ghidra, non-matching)
// GLOBAL DAT_0028f7b0 int *
// GLOBAL DAT_0028f7b4 int *
// GLOBAL DAT_0028f7b8 uint *
// GLOBAL DAT_0028f7bc int *
// GLOBAL DAT_0028f7c0 float
// GLOBAL DAT_0028f7c4 uint *
// GLOBAL DAT_0028f7c8 undefined4 *
// GLOBAL DAT_0028f7cc undefined4
// GLOBAL DAT_0028f7d0 undefined4
// GLOBAL DAT_0028f7d4 undefined4

undefined4 func_0028F370(int param_1)

{
  char cVar1;
  short sVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  float fparam_0;
  
  iVar5 = func_004B083C();
  if ((iVar5 != 0) || (*(char *)(*DAT_0028f7b0 + 0x25) != '\0')) {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  iVar5 = *DAT_0028f7b4;
  uVar6 = func_004B083C();
  *(char *)(iVar5 + 0x5c) = (char)uVar6;
  puVar3 = DAT_0028f7b8;
  if (*(char *)(param_1 + 0xbf) != '\0') {
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  uVar8 = *puVar3;
  iVar5 = (int)*(char *)(uVar8 + 0x18);
  uVar7 = iVar5 - 2;
  bVar12 = 2 < uVar7;
  bVar11 = uVar7 == 3;
  if (3 < uVar7) {
    bVar12 = iVar5 != 0x16;
    bVar11 = iVar5 == 0x17;
  }
  if (bVar12 && !bVar11) {
LAB_0028f424:
    uVar4 = 0;
  }
  else {
    uVar7 = iVar5 - 4;
    bVar11 = iVar5 != 4;
    if (1 < uVar7) {
      uVar7 = iVar5 - 0x16;
      bVar11 = uVar7 != 0;
    }
    if (!bVar11 || uVar7 == 1) goto LAB_0028f424;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0xc9) = uVar4;
  pbVar9 = (byte *)(uVar8 + 0x18);
  if ((*pbVar9 == 2) &&
     ((*(int *)(uVar8 + 0x1c) != 6 || (*(undefined1 *)(param_1 + 0xc9) = 0, *pbVar9 == 2)))) {
    if (*(int *)(uVar8 + 0x1c) == 0xb) {
      bVar11 = func_00584B94(*DAT_0028f7bc,0xfb);
      if (bVar11) {
        *(undefined1 *)(param_1 + 0xc9) = 0;
      }
      goto LAB_0028f480;
    }
  }
  else {
LAB_0028f480:
    uVar7 = (uint)*pbVar9;
    bVar11 = uVar7 == 3;
    if (bVar11) {
      uVar7 = *(uint *)(uVar8 + 0x1c);
    }
    if (bVar11 && uVar7 == 4) {
      *(undefined1 *)(param_1 + 0xc9) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  func_00362834((undefined1 *)(param_1 + 0x20));
  sVar2 = *(short *)(param_1 + 0x42);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined1 *)(param_1 + 199) = 1;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 1;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  fparam_0 = DAT_0028f7c0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0x161) = 0;
  if (sVar2 != 0x58) {
    uVar7 = 0x58;
    if (sVar2 == 100) {
      uVar7 = 0x66;
    }
    else if (sVar2 == 99) {
      uVar7 = 0x65;
    }
    else if (sVar2 == 0x5e) {
      uVar7 = 0x5b;
    }
    else if (sVar2 == 0x83) {
      uVar7 = 0x84;
    }
    else if (sVar2 == 0x85) {
      uVar7 = 0x86;
    }
    else if (sVar2 == 0x87) {
      uVar7 = 0x88;
    }
    uVar8 = (uint)*(byte *)(param_1 + 0x164);
    bVar11 = uVar8 == 5;
    if (bVar11) {
      uVar8 = *(uint *)(param_1 + 0x168);
    }
    if (bVar11 && uVar8 == 9) {
      uVar7 = 0x84;
    }
    if (sVar2 == 0x62) {
      uVar7 = 0x61;
    }
    else if (sVar2 == 0x5d) {
LAB_0028f560:
      uVar7 = 0x59;
    }
    else if (sVar2 == 0x8b) {
      uVar7 = 0x8c;
    }
    else {
      if (sVar2 == 0x89) {
        uVar7 = 0x8c;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6bc) = 0;
      }
      if (*(short *)(param_1 + 0x42) == 0x5c) {
        puVar10 = *(undefined4 **)(param_1 + 0x48);
        if (((*DAT_0028f7c4 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0028f7c4), iVar5 != 0))
        {
          *DAT_0028f7c8 = DAT_0028f7cc;
        }
        if ((puVar10 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)*puVar10)(puVar10,DAT_0028f7c8), iVar5 == 0)) {
          puVar10 = (undefined4 *)0x0;
        }
        if (*(char *)((int)puVar10 + 0x89) != '\0') {
          uVar7 = 0x5a;
        }
      }
      if ((*(short *)(param_1 + 0x42) == 0x22) &&
         (uVar8 = func_0052E454(*(int *)(param_1 + 0x10),(float *)(*(int *)(param_1 + 0x10) + 0x3d0)
                                ,1,fparam_0), uVar8 != 0)) goto LAB_0028f560;
    }
    uVar8 = *puVar3;
    if (*(char *)(uVar8 + 0x18) == '\x04') {
      bVar11 = *(int *)(uVar8 + 0x1c) == 0x11;
      if (bVar11) {
        uVar8 = (uint)*(ushort *)(uVar8 + 0x20);
      }
      if (bVar11 && uVar8 == 7) {
        uVar7 = 0x66;
      }
    }
    else if (*(char *)(uVar8 + 0x18) == '\x02') {
      bVar11 = *(int *)(uVar8 + 0x1c) == 10;
      if (bVar11) {
        uVar8 = (uint)*(ushort *)(uVar8 + 0x20);
      }
      if (bVar11 && uVar8 == 0) {
        uVar7 = 0x58;
      }
    }
    iVar5 = func_0052EE58();
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x160) = 0x17;
      cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x6b1);
      if ((cVar1 == '\a' || cVar1 == '\b') || (cVar1 == '\t' || cVar1 == '\n')) {
        *(char *)(param_1 + 0x160) = cVar1;
      }
      uVar7 = 0xad;
    }
    iVar5 = func_002D55D0(*(int *)(param_1 + 0x48),uVar7);
    if (iVar5 != 0) {
      func_002908B8(param_1);
      func_002D5320(*(int *)(param_1 + 0x48));
    }
  }
  if ((char)*(undefined4 *)(*puVar3 + 0x18) == '\0' && *(int *)(*puVar3 + 0x1c) == 0x2a) {
    func_001DD48C(*(int *)(param_1 + 0x10),0x50,1);
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  uVar7 = *puVar3;
  if (*(char *)(uVar7 + 0x18) == '\0') {
    iVar5 = *(int *)(uVar7 + 0x1c);
    if ((iVar5 != 2 && iVar5 != 0xf) && (iVar5 != 0x11 && iVar5 != 0x24)) goto LAB_0028f760;
  }
  else if ((*(char *)(uVar7 + 0x18) != '\x01') ||
          (iVar5 = *(int *)(uVar7 + 0x1c), (iVar5 != 8 && iVar5 != 0x11) && iVar5 != 0x1a))
  goto LAB_0028f760;
  *(undefined1 *)(param_1 + 0xd0) = 0;
LAB_0028f760:
  iVar5 = *(int *)(param_1 + 0x18);
  func_0028D7B4(iVar5 + 0x3c);
  func_0028D7B4(iVar5 + 0x5c);
  uVar6 = DAT_0028f7d0;
  *(float *)(param_1 + 0x9c) = fparam_0;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  uVar6 = DAT_0028f7d4;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  return func_003772FC(param_1 + 0x54);
}

