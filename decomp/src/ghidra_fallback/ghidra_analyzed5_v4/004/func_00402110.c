#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004010C8(int param_1,uint *param_2);
extern byte *DAT_0040242c;
extern byte *DAT_00402430;
extern byte *DAT_00402434;
extern byte *DAT_00402438;
extern byte *DAT_0040243c;
extern byte *DAT_00402440;
extern byte *DAT_00402444;
extern byte *DAT_00402448;
extern uint DAT_0040244c;

// USA 00402110 <- EU 004020F0 (Ghidra, non-matching)
// GLOBAL DAT_0040242c byte *
// GLOBAL DAT_00402430 byte *
// GLOBAL DAT_00402434 byte *
// GLOBAL DAT_00402438 byte *
// GLOBAL DAT_0040243c byte *
// GLOBAL DAT_00402440 byte *
// GLOBAL DAT_00402444 byte *
// GLOBAL DAT_00402448 byte *
// GLOBAL DAT_0040244c uint

uint * func_00402110(int param_1,uint *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  char cVar11;
  
  puVar4 = func_004010C8(param_1,param_2);
  cVar11 = '\0';
  bVar3 = false;
  iVar10 = 0;
  bVar2 = false;
  if ((*(uint *)(param_3 + 0x78) & 0x1c0) != 0) {
    uVar5 = *(uint *)(param_3 + 0x74);
    pcVar6 = (char *)(((uVar5 << 0x1e) >> 0x19) + ((uVar5 << 0x1c) >> 0x1e) * 0x14 +
                      (uVar5 >> 1 & 0x18) + (uVar5 >> 6 & 8) + (uVar5 >> 8 & 0xc) +
                      ((int)(uVar5 << 0x13) >> 0x1f) * -0xc + *(int *)(param_3 + 0x7c));
    cVar11 = *pcVar6;
    if (cVar11 != '\x01' && cVar11 != '\x02') {
      if (cVar11 == '\x03') {
        cVar11 = '\x04';
      }
      else if (cVar11 == '\x05') {
        cVar11 = '\x03';
      }
      else {
        cVar11 = '\0';
      }
    }
    if (pcVar6[1] == '\x01') {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  if (1 < (*(uint *)(param_3 + 0x78) << 0x17) >> 0x1d) {
    uVar5 = *(uint *)(param_3 + 0x74);
    iVar7 = (uVar5 >> 6 & 8) +
            ((uVar5 << 0x1e) >> 0x19) + ((uVar5 << 0x1c) >> 0x1e) * 0x14 + (uVar5 >> 1 & 0x18) +
            (uVar5 >> 8 & 0xc) + ((int)(uVar5 << 0x13) >> 0x1f) * -0xc + *(int *)(param_3 + 0x7c);
    cVar1 = *(char *)(iVar7 + 4);
    if (cVar1 == '\x01') {
      iVar10 = 1;
    }
    else if (cVar1 == '\x02') {
      iVar10 = 2;
    }
    else if (cVar1 == '\x03') {
      iVar10 = 4;
    }
    else if (cVar1 == '\x05') {
      iVar10 = 3;
    }
    else {
      iVar10 = 0;
    }
    if (*(char *)(iVar7 + 5) == '\x01') {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  if (cVar11 == '\x01') {
    func_00110D44(puVar4,DAT_0040242c,0x18);
    func_00110D44(puVar4 + 6,DAT_00402434,0x18);
  }
  else if (cVar11 == '\x02') {
    func_00110D44(puVar4,DAT_00402438,0x18);
    func_00110D44(puVar4 + 6,DAT_0040243c,0x18);
  }
  else {
    func_00110D44(puVar4,DAT_0040242c,0x18);
    func_00110D44(puVar4 + 6,DAT_00402430,0x18);
  }
  puVar9 = puVar4 + 0xc;
  uVar5 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 8) << 0x10) >> 0x18;
  if (uVar5 == 1 || uVar5 == 0x13) {
    *puVar4 = *puVar4 & 0xfffffff0 | 0xe;
  }
  uVar5 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 0x28) << 0x10) >> 0x18;
  if (uVar5 == 1 || uVar5 == 0x13) {
    puVar4[6] = puVar4[6] & 0xfffffff0 | 0xe;
  }
  uVar5 = puVar4[9];
  if (bVar3) {
    uVar5 = uVar5 | 0x10000;
  }
  else {
    uVar5 = uVar5 | 0x20000;
  }
  puVar4[9] = uVar5;
  if (iVar10 == 1) {
    func_00110D44(puVar9,DAT_00402444,0x18);
  }
  else if (iVar10 == 2) {
    func_00110D44(puVar9,DAT_00402448,0x18);
  }
  else {
    func_00110D44(puVar9,DAT_00402440,0x18);
  }
  uVar5 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 0x48) << 0x10) >> 0x18;
  if (uVar5 == 1 || uVar5 == 0x13) {
    *puVar9 = *puVar9 & 0xfffffff0 | 0xe;
  }
  uVar5 = DAT_0040244c;
  uVar8 = puVar4[0xf];
  if (bVar2) {
    uVar8 = uVar8 | 0x10000;
  }
  else {
    uVar8 = uVar8 | 0x20000;
  }
  puVar4[0xf] = uVar8;
  puVar4[0x12] = 0x4400;
  puVar4[0x13] = uVar5;
  *(undefined1 *)(param_1 + 0x62a) = 4;
  return puVar4 + 0x14;
}

