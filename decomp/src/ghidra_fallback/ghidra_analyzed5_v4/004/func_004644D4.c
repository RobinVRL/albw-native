// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0031B9C8(undefined4 param_1);
extern int func_0031BC9C(int param_1);
extern int func_00367EE8(int param_1,int param_2);
extern int func_00367F80(int param_1,uint param_2,uint param_3,uint param_4);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556AA8();
extern int func_005583F8(char *param_1);
extern int *DAT_00464778;
extern int DAT_0046477c;
extern int *DAT_00464780;
extern int DAT_00464784;

// USA 004644D4 <- EU 004644AC (Ghidra, non-matching)
// GLOBAL DAT_00464778 int *
// GLOBAL DAT_0046477c int
// GLOBAL DAT_00464780 int *
// GLOBAL DAT_00464784 int

undefined4 func_004644D4(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  pcVar2 = *(char **)(*DAT_00464778 + 0x51c);
  if (pcVar2 != (char *)0x0) {
    local_24 = pcVar2 + 0x10;
    local_28 = DAT_0046477c;
    func_00368398(*(int *)(param_1 + 0x74),&local_28);
    func_00368074(*(int *)(param_1 + 0x74),(int)(pcVar2 + 0x28));
    func_00367FB4(*(int *)(param_1 + 0x74),(short)pcVar2[7]);
    iVar3 = func_005583F8(pcVar2);
    func_003694B4(*(int *)(param_1 + 0x74),iVar3,0);
    func_00367EE8(*(int *)(param_1 + 0x74),
                  (int)((int)pcVar2[8] + ((uint)((int)pcVar2[8] >> 0x1f) >> 0x1e)) >> 2);
    func_00367F80(*(int *)(param_1 + 0x74),0,0,(int)pcVar2[9] + 2);
    if (pcVar2[10] == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 1;
    }
    func_00367F80(*(int *)(param_1 + 0x74),1,uVar7,(int)pcVar2[10] + 1);
    func_00367F80(*(int *)(param_1 + 0x74),2,2,(int)pcVar2[0xb] + 2);
    uVar7 = func_0031B9C8((uint)(byte)pcVar2[0xe]);
    func_00367F80(*(int *)(param_1 + 0x74),4,uVar7,(byte)pcVar2[0xc] + 1);
    uVar7 = func_0031B9C8((uint)(byte)pcVar2[0xf]);
    func_00367F80(*(int *)(param_1 + 0x74),3,uVar7,(byte)pcVar2[0xd] + 1);
    func_00368838(*(int *)(param_1 + 0x74),(uint)(pcVar2[1] != '\0'),(uint)(pcVar2[2] != '\0'),
                  (uint)(pcVar2[3] != '\0'));
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x44);
      iVar8 = *(int *)(param_1 + 0x1c);
      bVar12 = pcVar2[4] != '\0';
      bVar11 = (bool)(bVar1 & 1);
      if ((bVar1 & 1) != 0) {
        bVar11 = true;
      }
      if ((bVar11 != bVar12) && (*(byte *)(iVar3 + 0x44) = bVar1 & 0xfe | bVar12, bVar12)) {
        *(byte *)(iVar8 + 0x70) = *(byte *)(iVar8 + 0x70) | 2;
      }
    }
  }
  iVar3 = *DAT_00464780;
  if (iVar3 == 0) {
    return 0;
  }
  piVar10 = *(int **)(param_1 + 0x1c);
  iVar4 = func_0055696C(iVar3,0);
  iVar8 = DAT_00464784;
  iVar9 = 0;
  do {
    iVar5 = func_005229AC(piVar10,(int *)(iVar8 + iVar9 * 8));
    if (iVar5 != 0) {
      bVar1 = *(byte *)(iVar5 + 0x44);
      bVar12 = iVar9 == iVar4 + -2;
      bVar11 = (bool)(bVar1 & 1);
      if ((bVar1 & 1) != 0) {
        bVar11 = true;
      }
      if ((bVar11 != bVar12) && (*(byte *)(iVar5 + 0x44) = bVar1 & 0xfe | bVar12, bVar12)) {
        *(byte *)(piVar10 + 0x1c) = *(byte *)(piVar10 + 0x1c) | 2;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  iVar8 = func_00556AA8(iVar3,2);
  uVar7 = func_0055696C(iVar3,iVar8);
  uVar6 = func_0031BC9C(iVar8);
  func_00367F80(*(int *)(param_1 + 0x74),6,uVar6,uVar7);
  iVar8 = func_00556AA8(iVar3,1);
  uVar7 = func_0055696C(iVar3,iVar8);
  uVar6 = func_0031BC9C(iVar8);
  return func_00367F80(*(int *)(param_1 + 0x74),5,uVar6,uVar7);
}

