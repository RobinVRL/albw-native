#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004386c0;
extern int DAT_004386c4;
extern char s_N_PosC_00_004386c8[];
extern char s_N_PosT_00_004386d4[];

// USA 00438580 <- EU 00438560 (Ghidra, non-matching)
// GLOBAL DAT_004386c0 int
// GLOBAL DAT_004386c4 int
// GLOBAL s_N_PosC_00_004386c8 string
// GLOBAL s_N_PosT_00_004386d4 string

void func_00438580(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  cVar1 = *(char *)(param_1 + 0xd);
  bVar7 = cVar1 != '\0';
  if (!bVar7) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar7 || cVar1 != '\0') {
    return;
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  func_00231448(param_1 + 0x20);
  iVar3 = DAT_004386c0;
  *(int **)(param_1 + 0x28) = piVar6;
  *(short *)(param_1 + 0x22) = (short)param_2;
  iVar5 = 0;
  iVar4 = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  do {
    iVar2 = func_005229AC(piVar6,(int *)(iVar3 + iVar4 * 8));
    if (iVar4 == param_2) {
      iVar5 = iVar2;
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x44) & 1) == 0)) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        *(byte *)(piVar6 + 0x1c) = *(byte *)(piVar6 + 0x1c) | 2;
      }
    }
    else if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x44) & 1) != 0)) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  if (iVar5 != 0) {
    if (param_3 == 1) {
      local_38 = DAT_004386c4;
      local_34 = s_N_PosC_00_004386c8;
      iVar3 = func_005229AC(piVar6,&local_38);
    }
    else {
      if (param_3 != 2) goto LAB_004386b4;
      local_30 = DAT_004386c4;
      local_2c = s_N_PosT_00_004386d4;
      iVar3 = func_005229AC(piVar6,&local_30);
    }
    if (iVar3 != 0) {
      if (*(int *)(iVar5 + 0xc) != 0) {
        func_003FF904(*(int *)(iVar5 + 0xc),iVar5);
      }
      func_003FF898(iVar3,iVar5);
      *(byte *)(piVar6 + 0x1c) = *(byte *)(piVar6 + 0x1c) | 2;
    }
  }
LAB_004386b4:
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

