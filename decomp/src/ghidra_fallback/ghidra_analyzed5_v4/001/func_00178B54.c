#include "ghidra_types.h"

extern int func_0025B8E0(int param_1,int *param_2);
extern int func_0042A064(short *param_1,uint param_2,uint param_3);
extern int *DAT_00178cbc;
extern undefined4 DAT_00178cc0;
extern char s_SE_S_TALK_CHAR_END_00178cc4[];

// USA 00178B54 <- EU 00178B54 (Ghidra, non-matching)
// GLOBAL DAT_00178cbc int *
// GLOBAL DAT_00178cc0 undefined4
// GLOBAL s_SE_S_TALK_CHAR_END_00178cc4 string

undefined4 func_00178B54(int *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  uVar6 = DAT_00178cc0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x2a) == '\0') {
    return 0;
  }
  if (*(short *)(iVar2 + 0x38) == 0) {
    sVar7 = *(short *)(iVar2 + 0x34);
    psVar4 = *(short **)(iVar2 + 8);
    do {
      sVar1 = *psVar4;
      psVar3 = psVar4;
      if (sVar1 == 0) break;
      if (sVar1 == 0xe) {
        psVar3 = (short *)((int)psVar4 + (ushort)psVar4[3] + 8);
LAB_00178bc4:
        bVar9 = psVar4 == (short *)0x0;
        psVar4 = psVar3;
        if (bVar9) goto LAB_00178bcc;
      }
      else {
        if (sVar1 == 0xf) {
          psVar3 = psVar4 + 3;
          goto LAB_00178bc4;
        }
LAB_00178bcc:
        psVar3 = psVar4 + 1;
        if (*psVar4 == 10) {
          sVar7 = sVar7 + -1;
        }
      }
      psVar4 = psVar3;
    } while (sVar7 != 0);
    uVar5 = (int)psVar3 - (int)*(short **)(iVar2 + 8) & 0xffff;
    *(short *)(iVar2 + 0x22) = (short)(uVar5 >> 1);
    iVar8 = *DAT_00178cbc;
    if ((*(ushort *)(iVar2 + 0x20) <= uVar5) &&
       (*(int *)(iVar2 + 0x18) <= (int)(uint)*(ushort *)(iVar2 + 6))) {
      *(undefined1 *)(iVar2 + 0x28) = 1;
      if (*(char *)(iVar2 + 0x41) == '\0') {
        return 0;
      }
      pcStack_14 = s_SE_S_TALK_CHAR_END_00178cc4;
      uStack_18 = uVar6;
      func_0025B8E0(iVar8,&uStack_18);
      return 0;
    }
    *(undefined1 *)(iVar2 + 0x2b) = 1;
    if (*(char *)(iVar2 + 0x41) != '\0') {
      pcStack_14 = s_SE_S_TALK_CHAR_END_00178cc4;
      uStack_18 = uVar6;
      func_0025B8E0(iVar8,&uStack_18);
    }
    if (*(short *)(iVar2 + 0x3a) != 0) {
      *(undefined2 *)(iVar2 + 0x3a) = 0;
      *(char *)(iVar2 + 0x3c) = *(char *)(iVar2 + 0x3c) + '\x01';
    }
  }
  uVar6 = func_0042A064(*(short **)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x22) << 1,
                        (uint)*(ushort *)(iVar2 + 0x34));
  return uVar6;
}

