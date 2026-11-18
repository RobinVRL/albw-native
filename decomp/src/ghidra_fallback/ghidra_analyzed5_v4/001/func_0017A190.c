#include "ghidra_types.h"

extern int func_00179664(int param_1);
extern int func_0025B8E0(int param_1,int *param_2);
extern int func_0042A064(short *param_1,uint param_2,uint param_3);
extern int *DAT_0017a4cc;
extern undefined4 DAT_0017a4d0;
extern char s_SE_S_TALK_CHAR_0017a4e8[];
extern char s_SE_S_TALK_CHAR_END_0017a4d4[];

// USA 0017A190 <- EU 0017A190 (Ghidra, non-matching)
// GLOBAL DAT_0017a4cc int *
// GLOBAL DAT_0017a4d0 undefined4
// GLOBAL s_SE_S_TALK_CHAR_0017a4e8 string
// GLOBAL s_SE_S_TALK_CHAR_END_0017a4d4 string

undefined4 func_0017A190(int param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 uVar5;
  short sVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(short *)(param_1 + 0x36) != 0) {
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -1;
    }
    return 0;
  }
  uVar3 = *(ushort *)(param_1 + 0x22);
  uVar10 = (uint)uVar3;
  if (uVar10 == 0) {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  uVar5 = DAT_0017a4d0;
  piVar4 = DAT_0017a4cc;
  sVar6 = *(short *)(param_1 + 0x3a);
  if (sVar6 != 0) {
    *(short *)(param_1 + 0x3a) = sVar6 + -1;
    if (sVar6 != 1) {
      return 0;
    }
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + '\x01';
    return 0;
  }
  cVar2 = *(char *)(param_1 + 0x2b);
  uVar1 = uVar10 * 2;
  bVar11 = cVar2 == '\0';
  if (bVar11) {
    cVar2 = *(char *)(param_1 + 0x29);
  }
  if (!bVar11 || cVar2 != '\0') {
    if (*(short *)(param_1 + 0x38) == 0) {
      if (*(char *)(param_1 + 0x29) == '\0') {
        return 0;
      }
    }
    else {
      sVar6 = *(short *)(param_1 + 0x36) + -1;
      *(short *)(param_1 + 0x36) = sVar6;
      if (sVar6 != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        if (*(char *)(param_1 + 0x2a) == '\0') {
          return 0;
        }
        if (uVar10 != 0) {
          func_00179664(param_1);
        }
        *(undefined1 *)(param_1 + 0x2b) = 0;
        *(undefined1 *)(param_1 + 0x2d) = 0;
        *(undefined2 *)(param_1 + 0x32) = 0;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x38);
        *(undefined2 *)(param_1 + 0x3a) = 0;
        *(undefined1 *)(param_1 + 0x3c) = 0;
        if (*(char *)(param_1 + 0x3f) == '\0') {
          if (*(char *)(param_1 + 0x28) != '\0') {
            return 0;
          }
        }
        else {
          if (*(char *)(param_1 + 0x28) != '\0') {
            *(ushort *)(param_1 + 0x22) = uVar3;
            return 0;
          }
          *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x30) >> 1;
        }
        return func_0042A064(*(short **)(param_1 + 8),(uint)*(ushort *)(param_1 + 0x22) << 1,
                      (uint)*(ushort *)(param_1 + 0x34));
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    return 0;
  }
  if ((uint)*(ushort *)(param_1 + 0x30) <= uVar1 + 2) {
    bVar11 = true;
    while (uVar10 * 2 < (uint)*(ushort *)(param_1 + 0x20)) {
      iVar9 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      if (*(short *)(*(int *)(param_1 + 8) + iVar9) == 10) {
        bVar11 = false;
      }
    }
    if ((!bVar11) && (*(undefined1 *)(param_1 + 0x2b) = 1, *(char *)(param_1 + 0x41) != '\0')) {
      local_24 = s_SE_S_TALK_CHAR_END_0017a4d4;
      local_28 = uVar5;
      func_0025B8E0(*piVar4,&local_28);
    }
  }
  if (*(ushort *)(param_1 + 0x26) < *(ushort *)(param_1 + 0x24)) goto LAB_0017a4b8;
  *(undefined2 *)(param_1 + 0x26) = 0;
  if (*(ushort *)(param_1 + 0x20) <= uVar1) {
    if ((int)(uint)*(ushort *)(param_1 + 6) < *(int *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    else if (*(char *)(param_1 + 0x3f) == '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    if ((*(char *)(param_1 + 0x41) != '\0') && (*(char *)(param_1 + 0x3f) == '\0')) {
      local_24 = s_SE_S_TALK_CHAR_END_0017a4d4;
      local_28 = uVar5;
      func_0025B8E0(*piVar4,&local_28);
    }
    goto LAB_0017a4b8;
  }
  uVar3 = *(ushort *)(param_1 + 0x22);
  psVar7 = (short *)(*(int *)(param_1 + 8) + (uint)uVar3 * 2);
  if (*psVar7 == 0xe) {
    psVar8 = (short *)((int)psVar7 + (ushort)psVar7[3] + 8);
LAB_0017a3cc:
    bVar11 = psVar7 == (short *)0x0;
    psVar7 = psVar8;
    if (bVar11) goto LAB_0017a42c;
    for (iVar9 = 0; (short *)(*(int *)(param_1 + 8) + ((uint)uVar3 + iVar9) * 2) != psVar8;
        iVar9 = iVar9 + 1) {
    }
    *(ushort *)(param_1 + 0x22) = uVar3 + (short)iVar9;
  }
  else {
    if (*psVar7 == 0xf) {
      psVar8 = psVar7 + 3;
      goto LAB_0017a3cc;
    }
LAB_0017a42c:
    *(ushort *)(param_1 + 0x22) = uVar3 + 1;
    if ((((*(char *)(param_1 + 0x2d) == '\0') && (sVar6 = *psVar7, sVar6 != 0x20)) &&
        (sVar6 != 0x3000 && sVar6 != 10)) && (sVar6 != 9)) {
      *(undefined1 *)(param_1 + 0x2d) = 1;
    }
  }
  bVar11 = *(char *)(param_1 + 0x41) != '\0';
  cVar2 = '\0';
  if (bVar11) {
    cVar2 = *(char *)(param_1 + 0x2d);
  }
  if (bVar11 && cVar2 != '\0') {
    local_24 = s_SE_S_TALK_CHAR_0017a4e8;
    local_28 = uVar5;
    func_0025B8E0(*piVar4,&local_28);
  }
LAB_0017a4b8:
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
  return 0;
}

