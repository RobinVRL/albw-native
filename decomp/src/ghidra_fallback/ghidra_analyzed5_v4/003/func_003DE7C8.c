#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010AA9C(void);
extern int func_003DC2E4(void);
extern int func_003DC2F0(int param_1);
extern int func_003DC614(int param_1);
extern int func_003DC67C(uint *param_1,int param_2,int param_3);
extern int func_003DC7F4(int param_1);
extern int func_003DCA30(int param_1);
extern int func_003DCAB0(int param_1,int param_2,int param_3);
extern int func_003DCB3C(char *param_1,int param_2,int param_3);
extern char *DAT_003de8d4;
extern uint *DAT_003de8d8;
extern int DAT_003de8dc;

// USA 003DE7C8 <- EU 003DE7A8 (Ghidra, non-matching)
// GLOBAL DAT_003de8d4 char *
// GLOBAL DAT_003de8d8 uint *
// GLOBAL DAT_003de8dc int

void func_003DE7C8(int param_1)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = func_0010AA9C();
  puVar2 = DAT_003de8d8;
  pcVar1 = DAT_003de8d4;
  if (iVar3 != 0) {
    iVar3 = func_003DC2E4();
    iVar4 = param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 8;
    iVar5 = *(int *)(DAT_003de8dc + iVar4);
    iVar4 = *(int *)(iVar4 + 0x12f4);
    if (*(char *)(DAT_003de8dc + 700 + param_1) != '\0') {
      func_003DCB3C(pcVar1,0,iVar5);
      func_003DCB3C(pcVar1,1,iVar4);
    }
    func_003DCAB0((int)pcVar1,0,iVar5);
    func_003DCAB0((int)pcVar1,1,iVar4);
    func_003DC614((int)puVar2);
    func_003DC7F4((int)puVar2);
    iVar5 = *(int *)(param_1 + 0x1320);
    iVar4 = func_003DCA30((int)pcVar1);
    iVar3 = func_003DC2F0(iVar3);
    func_003DC67C(puVar2,(iVar5 - iVar4) - iVar3,*(int *)(param_1 + 0x1324));
    **(undefined2 **)(param_1 + (uint)*(ushort *)(param_1 + 0x131e) * 4 + 0x1098) =
         *(undefined2 *)(param_1 + 0x131a);
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if ((int)*(uint *)(param_1 + 4) < 0) {
      func_0010A98C(*(uint *)(param_1 + 4));
    }
    *(ushort *)(param_1 + 0x131e) = *(ushort *)(param_1 + 0x131a) & 1;
    *(char *)(param_1 + 0x1319) = *(char *)(param_1 + 0x1319) + '\x01';
  }
  return;
}

