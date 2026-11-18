#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern int func_005583F8(char *param_1);
extern int *DAT_0047ec8c;
extern int DAT_0047ec90;
extern int *DAT_0047ec94;

// USA 0047EC1C <- EU 0047EBF4 (Ghidra, non-matching)
// GLOBAL DAT_0047ec8c int *
// GLOBAL DAT_0047ec90 int
// GLOBAL DAT_0047ec94 int *

void func_0047EC1C(int param_1)

{
  char *pcVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_001B6C04(param_1);
  pcVar1 = *(char **)(*DAT_0047ec8c + 0x51c);
  if (pcVar1 != (char *)0x0) {
    local_14 = pcVar1 + 0x10;
    local_18 = DAT_0047ec90;
    func_00368398(*(int *)(param_1 + 0x74),&local_18);
    func_00368074(*(int *)(param_1 + 0x74),(int)(pcVar1 + 0x28));
    iVar2 = func_005583F8(pcVar1);
    func_003694B4(*(int *)(param_1 + 0x74),iVar2,0);
    func_00367FB4(*(int *)(param_1 + 0x74),(short)pcVar1[7]);
  }
  *(ushort *)(*DAT_0047ec94 + 0x33e) = *(ushort *)(*DAT_0047ec94 + 0x33e) & 64999;
  return;
}

