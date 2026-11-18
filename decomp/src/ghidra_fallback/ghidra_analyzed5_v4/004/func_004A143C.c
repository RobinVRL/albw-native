#include "ghidra_types.h"

extern char *DAT_004a14e8;
extern uint DAT_004a14ec;
extern int DAT_004a14f0;

// USA 004A143C <- EU 004A1414 (Ghidra, non-matching)
// GLOBAL DAT_004a14e8 char *
// GLOBAL DAT_004a14ec uint
// GLOBAL DAT_004a14f0 int

uint func_004A143C(byte *param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = DAT_004a14f0;
  uVar5 = DAT_004a14ec;
  pcVar2 = DAT_004a14e8;
  if (*DAT_004a14e8 == '\0') {
    uVar8 = 0;
    do {
      iVar7 = 4;
      uVar6 = uVar8;
      do {
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar6 >> 1;
        }
        else {
          uVar6 = uVar5 ^ uVar6 >> 1;
        }
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar6 >> 1;
        }
        else {
          uVar6 = uVar5 ^ uVar6 >> 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      *(uint *)(iVar3 + uVar8 * 4) = uVar6;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x100);
    *pcVar2 = '\x01';
  }
  uVar5 = 0xffffffff;
  if (param_2 != 0) {
    pbVar4 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      uVar5 = *(uint *)(DAT_004a14f0 + ((*param_1 ^ 0xffffffff) & 0xff) * 4) ^ 0xffffff;
      pbVar4 = param_1;
    }
    for (uVar8 = param_2 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 2;
      uVar5 = *(uint *)(DAT_004a14f0 + ((*pbVar1 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar5 = *(uint *)(DAT_004a14f0 + ((*pbVar4 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
    }
  }
  return ~uVar5;
}

