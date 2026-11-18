#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004010C8(int param_1,uint *param_2);
extern uint DAT_004020cc;
extern byte *DAT_004020d0;
extern byte *DAT_004020d4;
extern byte *DAT_004020d8;
extern byte *DAT_004020dc;
extern byte *DAT_004020e0;
extern byte *DAT_004020e4;
extern byte *DAT_004020e8;
extern byte *DAT_004020ec;

// USA 00401E44 <- EU 00401E24 (Ghidra, non-matching)
// GLOBAL DAT_004020cc uint
// GLOBAL DAT_004020d0 byte *
// GLOBAL DAT_004020d4 byte *
// GLOBAL DAT_004020d8 byte *
// GLOBAL DAT_004020dc byte *
// GLOBAL DAT_004020e0 byte *
// GLOBAL DAT_004020e4 byte *
// GLOBAL DAT_004020e8 byte *
// GLOBAL DAT_004020ec byte *

uint * func_00401E44(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  uint *puVar7;
  
  puVar2 = func_004010C8(param_1,param_2);
  uVar5 = DAT_004020cc;
  cVar6 = '\0';
  bVar1 = false;
  if ((*(uint *)(param_3 + 0x78) & 0x1c0) != 0) {
    uVar3 = *(uint *)(param_3 + 0x74);
    pcVar4 = (char *)(((uVar3 << 0x1e) >> 0x19) + ((uVar3 << 0x1c) >> 0x1e) * 0x14 +
                      (uVar3 >> 1 & 0x18) + (uVar3 >> 6 & 8) + (uVar3 >> 8 & 0xc) +
                      ((int)(uVar3 << 0x13) >> 0x1f) * -0xc + *(int *)(param_3 + 0x7c));
    cVar6 = *pcVar4;
    if (cVar6 != '\x01' && cVar6 != '\x02') {
      if (cVar6 == '\x03') {
        cVar6 = '\x04';
      }
      else if (cVar6 == '\x05') {
        cVar6 = '\x03';
      }
      else {
        cVar6 = '\0';
      }
    }
    if (pcVar4[1] == '\x01') {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (cVar6 == '\x01') {
    func_00110D44(puVar2,DAT_004020d0,0x18);
    func_00110D44(puVar2 + 6,DAT_004020d8,0x18);
    puVar7 = puVar2 + 0xe;
    puVar2[0xc] = 0x2200;
    puVar2[0xd] = uVar5;
  }
  else if (cVar6 == '\x02') {
    func_00110D44(puVar2,DAT_004020dc,0x18);
    func_00110D44(puVar2 + 6,DAT_004020e0,0x18);
    puVar7 = puVar2 + 0xe;
    puVar2[0xc] = 0x2200;
    puVar2[0xd] = uVar5;
  }
  else if (cVar6 == '\x03') {
    func_00110D44(puVar2,DAT_004020dc,0x18);
    func_00110D44(puVar2 + 6,DAT_004020e4,0x18);
    func_00110D44(puVar2 + 0xc,DAT_004020e8,0x18);
    puVar7 = puVar2 + 0x14;
    puVar2[0x12] = 0x2500;
    puVar2[0x13] = uVar5;
  }
  else if (cVar6 == '\x04') {
    func_00110D44(puVar2,DAT_004020dc,0x18);
    func_00110D44(puVar2 + 6,DAT_004020e4,0x18);
    func_00110D44(puVar2 + 0xc,DAT_004020ec,0x18);
    puVar2[0x12] = 0x2500;
    puVar2[0x13] = uVar5;
    puVar7 = puVar2 + 0x14;
  }
  else {
    func_00110D44(puVar2,DAT_004020d0,0x18);
    func_00110D44(puVar2 + 6,DAT_004020d4,0x18);
    puVar7 = puVar2 + 0xe;
    puVar2[0xc] = 0x2200;
    puVar2[0xd] = uVar5;
  }
  uVar5 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 8) << 0x10) >> 0x18;
  if (uVar5 == 1 || uVar5 == 0x13) {
    *puVar2 = *puVar2 & 0xfffffff0 | 0xe;
  }
  uVar5 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 0x28) << 0x10) >> 0x18;
  if (uVar5 == 1 || uVar5 == 0x13) {
    puVar2[6] = puVar2[6] & 0xfffffff0 | 0xe;
  }
  uVar5 = puVar2[9];
  if (bVar1) {
    uVar5 = uVar5 | 0x10000;
  }
  else {
    uVar5 = uVar5 | 0x20000;
  }
  puVar2[9] = uVar5;
  *(undefined1 *)(param_1 + 0x62a) = 3;
  return puVar7;
}

