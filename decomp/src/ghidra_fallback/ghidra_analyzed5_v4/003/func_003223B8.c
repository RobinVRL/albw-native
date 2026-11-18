#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int DAT_0032242c;
extern int *DAT_00322430;
extern char s__s_PLAY_00322434[];
extern char s_cf_00322434[];

// USA 003223B8 <- EU 00322394 (Ghidra, non-matching)
// GLOBAL DAT_0032242c int
// GLOBAL DAT_00322430 int *
// GLOBAL s_cf_00322434 string

void func_003223B8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x4b))
  if (param_2 == 0x10) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_2;
  piVar1 = DAT_00322430;
  if ((*(int *)(param_1 + 0x24) == -1) && ((param_2 & 0x10) != 0)) {
    local_5c = local_54;
    uStack_58 = 0x40;
    uStack_15 = 0;
    local_54[0] = 0;
    local_60 = DAT_0032242c;
    uVar2 = func_00588154(*DAT_00322430,*(undefined4 *)(param_1 + 0x28));
    func_004994B0((int)&local_60,s__s_PLAY_00322434,uVar2,param_4);
    iVar3 = func_00587FCC(*piVar1,&local_60);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}

