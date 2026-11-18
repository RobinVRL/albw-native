#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern char s_ChargreTerritoryEX_00386adc[];
extern char s_ChargreTerritory_00386af0[];

// USA 003869FC <- EU 003869D8 (Ghidra, non-matching)
// GLOBAL s_ChargreTerritoryEX_00386adc string
// GLOBAL s_ChargreTerritory_00386af0 string

void func_003869FC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x3b);
  if (cVar1 == '\x04') {
    uVar3 = 1;
  }
  else if (cVar1 == '\x05') {
    uVar3 = 2;
  }
  else if (cVar1 == '\x06') {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
  }
  func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar3);
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(*(int *)(iVar4 + 0x8bc) + 4) == '\0') {
    pcVar5 = s_ChargreTerritory_00386af0;
    if (*(int *)(iVar4 + 0x344) == 0) goto LAB_00386a88;
    iVar2 = *(int *)(param_1 + 0x1dc);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(param_1 + 0x1e0))) goto LAB_00386a68;
  }
  else {
    pcVar5 = s_ChargreTerritoryEX_00386adc;
    if (*(int *)(iVar4 + 0x344) == 0) {
LAB_00386a88:
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x1dc);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(param_1 + 0x1e0))) goto LAB_00386a68;
  }
  func_00110848(iVar2);
LAB_00386a68:
  func_004A1B9C(&local_18,*(int *)(iVar4 + 0x344),(uint *)pcVar5);
  *(int *)(param_1 + 0x1dc) = local_18;
  *(undefined4 *)(param_1 + 0x1e0) = uStack_14;
  return;
}

