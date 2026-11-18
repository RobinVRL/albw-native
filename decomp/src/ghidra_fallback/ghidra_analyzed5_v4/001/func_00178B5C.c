#include "ghidra_types.h"

extern int func_0025B8E0(int param_1,int *param_2);
extern int func_0042A064(short *param_1,uint param_2,uint param_3);
extern int *DAT_00178cbc;
extern undefined4 DAT_00178cc0;
extern char s_SE_S_TALK_CHAR_END_00178cc4[];

// USA 00178B5C <- EU 00178B5C (Ghidra, non-matching)
// GLOBAL DAT_00178cbc int *
// GLOBAL DAT_00178cc0 undefined4
// GLOBAL s_SE_S_TALK_CHAR_END_00178cc4 string

undefined4 func_00178B5C(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar5 = DAT_00178cc0;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    return 0;
  }
  if (*(short *)(param_1 + 0x38) == 0) {
    sVar6 = *(short *)(param_1 + 0x34);
    psVar3 = *(short **)(param_1 + 8);
    do {
      sVar1 = *psVar3;
      psVar2 = psVar3;
      if (sVar1 == 0) break;
      if (sVar1 == 0xe) {
        psVar2 = (short *)((int)psVar3 + (ushort)psVar3[3] + 8);
LAB_00178bc4:
        bVar8 = psVar3 == (short *)0x0;
        psVar3 = psVar2;
        if (bVar8) goto LAB_00178bcc;
      }
      else {
        if (sVar1 == 0xf) {
          psVar2 = psVar3 + 3;
          goto LAB_00178bc4;
        }
LAB_00178bcc:
        psVar2 = psVar3 + 1;
        if (*psVar3 == 10) {
          sVar6 = sVar6 + -1;
        }
      }
      psVar3 = psVar2;
    } while (sVar6 != 0);
    uVar4 = (int)psVar2 - (int)*(short **)(param_1 + 8) & 0xffff;
    *(short *)(param_1 + 0x22) = (short)(uVar4 >> 1);
    iVar7 = *DAT_00178cbc;
    if ((*(ushort *)(param_1 + 0x20) <= uVar4) &&
       (*(int *)(param_1 + 0x18) <= (int)(uint)*(ushort *)(param_1 + 6))) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      if (*(char *)(param_1 + 0x41) == '\0') {
        return 0;
      }
      local_14 = s_SE_S_TALK_CHAR_END_00178cc4;
      local_18 = uVar5;
      func_0025B8E0(iVar7,&local_18);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x2b) = 1;
    if (*(char *)(param_1 + 0x41) != '\0') {
      local_14 = s_SE_S_TALK_CHAR_END_00178cc4;
      local_18 = uVar5;
      func_0025B8E0(iVar7,&local_18);
    }
    if (*(short *)(param_1 + 0x3a) != 0) {
      *(undefined2 *)(param_1 + 0x3a) = 0;
      *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + '\x01';
    }
  }
  uVar5 = func_0042A064(*(short **)(param_1 + 8),(uint)*(ushort *)(param_1 + 0x22) << 1,
                        (uint)*(ushort *)(param_1 + 0x34));
  return uVar5;
}

