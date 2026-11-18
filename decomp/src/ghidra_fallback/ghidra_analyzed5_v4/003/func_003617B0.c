// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004A9640(int param_1,int *param_2,uint param_3);
extern undefined4 DAT_003618e0;
extern int *DAT_003618e4;
extern int DAT_003618e8;

// USA 003617B0 <- EU 0036178C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_003618e0 undefined4
// GLOBAL DAT_003618e4 int *
// GLOBAL DAT_003618e8 int

int func_003617B0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  uVar1 = DAT_003618e0;
  uVar3 = param_1 + 0x33c;
  *(undefined1 *)(param_1 + 0x33f) = 0;
  *(undefined4 *)(param_1 + 0x340) = uVar1;
  *(undefined4 *)(param_1 + 0x344) = uVar1;
  *(undefined4 *)(param_1 + 0x348) = uVar1;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = uVar1;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x35c) = uVar1;
  *(undefined4 *)(param_1 + 0x360) = uVar1;
  piVar2 = DAT_003618e4;
  *(undefined4 *)(param_1 + 0x364) = uVar1;
  *(undefined4 *)(param_1 + 0x368) = uVar1;
  *(undefined1 *)(param_1 + 0x5d1) = 0;
  if (param_2 != 0) {
    local_38 = uVar3 & 0xffff0000 | 0xffff;
    local_40 = 0;
    local_34 = 0xff;
    local_2c = param_1 + 0x1c;
    local_3c = *(undefined4 *)(param_1 + 0x278);
    local_48 = param_1 + 0x354;
    local_30 = *(undefined4 *)(param_1 + 0x5cc);
    local_28 = 1;
    *(undefined1 *)(param_1 + 0x5d0) = 1;
    local_44 = param_1 + 0x32c;
    uVar3 = func_004A9640(*piVar2,&local_48,0xc);
  }
  if (param_3 != 0) {
    local_38 = uVar3 & 0xffff0000 | 0xffff;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0xff;
    local_2c = param_1 + 0x78;
    local_3c = *(undefined4 *)(param_1 + 0x278);
    local_30 = *(undefined4 *)(param_1 + 0x5cc);
    local_28 = 1;
    *(undefined1 *)(param_1 + 0x5d0) = 0;
    local_44 = param_1 + 0x32c;
    func_004A9640(*piVar2,&local_48,0xc);
  }
  return (int)*(char *)(DAT_003618e8 + param_1);
}

