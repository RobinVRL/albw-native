#include "ghidra_types.h"

extern int func_0010140C(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_003DDBA8(char *param_1);
extern int func_003DDC50(char *param_1);
extern int func_003DDF94(int param_1,undefined2 param_2);
extern char *DAT_003dc9a8;
extern undefined4 DAT_003dc9ac;

// USA 003DC8F0 <- EU 003DC8D0 (Ghidra, non-matching)
// GLOBAL DAT_003dc9a8 char *
// GLOBAL DAT_003dc9ac undefined4

void func_003DC8F0(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  pcVar1 = DAT_003dc9a8;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    local_18 = in_r3;
    func_003DDBA8(pcVar1);
    uVar4 = DAT_003dc9ac;
    param_1[2] = '\x01';
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    pcVar1 = DAT_003dc9a8;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    func_003DDC50(pcVar1);
    func_0010140C();
    uVar4 = 0x70001;
    uVar2 = func_00108630(&local_18,1,0x70001);
    func_001024E0(uVar2,extraout_r1,uVar4);
    pcVar1 = DAT_003dc9a8;
    uVar3 = 1;
    if (-1 < (int)uVar2) {
      local_18 = local_18 & 0xff;
      uVar3 = (ushort)(local_18 != 0);
      if ((1 < local_18) && (local_18 == 2)) {
        uVar3 = 2;
      }
    }
    param_1[3] = (char)uVar3;
    func_003DDF94((int)pcVar1,uVar3);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    func_0010DEB0((undefined4 *)(param_1 + 0x44));
  }
  return;
}

