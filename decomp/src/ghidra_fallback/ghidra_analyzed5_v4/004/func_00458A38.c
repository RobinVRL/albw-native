#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00532C78(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_00458aa8;
extern char s_L_FileStateOne_00_00458a94[];

// GLOBAL DAT_00458aa8 int
// GLOBAL s_L_FileStateOne_00_00458a94 string
// USA 00458A38 <- EU 00458A14 (Ghidra, function missing from the decomp table)

void func_00458A38(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  bVar1 = func_00532C78(param_1 + 0xf8);
  if ((!bVar1) && (bVar1 = func_00532C78(param_1 + 0x128), !bVar1)) {
    pcStack_c = s_L_FileStateOne_00_00458a94;
    iStack_10 = DAT_00458aa8;
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
    }
    iVar3 = func_005229AC(*(int **)(*piVar2 + 0x1c),&iStack_10);
    func_00167E04(*(int *)(param_1 + 0x1c),iVar3,1);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x06');
  }
  return;
}

