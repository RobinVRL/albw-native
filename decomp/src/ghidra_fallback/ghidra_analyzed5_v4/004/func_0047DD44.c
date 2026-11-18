#include "ghidra_types.h"

extern int func_0031B9C8(undefined4 param_1);
extern int func_00367EE8(int param_1,int param_2);
extern int func_00367F80(int param_1,uint param_2,uint param_3,uint param_4);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern int func_005583F8(char *param_1);
extern int *DAT_0047ded4;
extern int DAT_0047ded8;

// USA 0047DD44 <- EU 0047DD1C (Ghidra, non-matching)
// GLOBAL DAT_0047ded4 int *
// GLOBAL DAT_0047ded8 int

void func_0047DD44(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  pcVar2 = *(char **)(*DAT_0047ded4 + 0x51c);
  if (pcVar2 != (char *)0x0) {
    local_14 = pcVar2 + 0x10;
    local_18 = DAT_0047ded8;
    func_00368398(*(int *)(param_1 + 0xd0),&local_18);
    func_00367FB4(*(int *)(param_1 + 0xd0),(short)pcVar2[7]);
    func_00368074(*(int *)(param_1 + 0xd0),(int)(pcVar2 + 0x28));
    iVar3 = func_005583F8(pcVar2);
    func_003694B4(*(int *)(param_1 + 0xd0),iVar3,0);
    func_00367EE8(*(int *)(param_1 + 0xd0),
                  (int)((int)pcVar2[8] + ((uint)((int)pcVar2[8] >> 0x1f) >> 0x1e)) >> 2);
    func_00367F80(*(int *)(param_1 + 0xd0),0,0,(int)pcVar2[9] + 2);
    if (pcVar2[10] == 0) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = 1;
    }
    func_00367F80(*(int *)(param_1 + 0xd0),1,uVar4,(int)pcVar2[10] + 1);
    func_00367F80(*(int *)(param_1 + 0xd0),2,2,(int)pcVar2[0xb] + 2);
    uVar4 = func_0031B9C8((uint)(byte)pcVar2[0xe]);
    func_00367F80(*(int *)(param_1 + 0xd0),4,uVar4,(byte)pcVar2[0xc] + 1);
    uVar4 = func_0031B9C8((uint)(byte)pcVar2[0xf]);
    func_00367F80(*(int *)(param_1 + 0xd0),3,uVar4,(byte)pcVar2[0xd] + 1);
    func_00368838(*(int *)(param_1 + 0xd0),(uint)(pcVar2[1] != '\0'),(uint)(pcVar2[2] != '\0'),
                  (uint)(pcVar2[3] != '\0'));
    iVar3 = *(int *)(param_1 + 0xd4);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x44);
      iVar5 = *(int *)(param_1 + 0x1c);
      bVar7 = pcVar2[4] != '\0';
      bVar6 = (bool)(bVar1 & 1);
      if ((bVar1 & 1) != 0) {
        bVar6 = true;
      }
      if ((bVar6 != bVar7) && (*(byte *)(iVar3 + 0x44) = bVar1 & 0xfe | bVar7, bVar7)) {
        *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
      }
    }
  }
  return;
}

