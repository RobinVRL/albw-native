#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00380778;
extern int DAT_0038077c;
extern int DAT_00380780;
extern uint *DAT_00380784;
extern int DAT_00380788;

// USA 0038063C <- EU 00380618 (Ghidra, non-matching)
// GLOBAL DAT_00380778 int *
// GLOBAL DAT_0038077c int
// GLOBAL DAT_00380780 int
// GLOBAL DAT_00380784 uint *
// GLOBAL DAT_00380788 int

int func_0038063C(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  #define local_1c ((int *)(albw_frame + 0x14))
  iVar2 = func_00588BE4(param_1);
  piVar1 = DAT_00380778;
  if ((iVar2 != *DAT_00380778) ||
     ((iVar2 = func_00588BE4(param_1), iVar2 == *piVar1 && (*(short *)(param_1 + 0x2e) != 0)))) {
LAB_00380684:
    *(undefined1 *)(param_1 + 0xb2e) = 1;
    return 1;
  }
  if (*(char *)(param_1 + 0xb2e) == '\0') {
    fVar6 = func_00521298(param_1);
    if ((int)ALBW_AS_U32(fVar6) < DAT_0038077c) goto LAB_00380684;
    if (*(char *)(param_1 + 0xb2e) == '\0') {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(afStack_28,pfVar3,(float *)(param_1 + 0x3d0));
      iVar2 = *(int *)(param_1 + 1000);
      iVar5 = *(int *)(param_1 + 0xa18);
      local_1c[0] = func_0068C690(afStack_28);
      local_1c[0] = (iVar2 + iVar5) - local_1c[0];
      uVar4 = func_0058E2B8(local_1c);
      if ((uVar4 <= *DAT_00380784) &&
         (pfVar3 = (float *)func_00520FC0(), fVar6 = *(float *)(param_1 + 8) - *pfVar3,
         fVar7 = *(float *)(param_1 + 0x10) - pfVar3[2],
         (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7)) < DAT_00380788)) {
        *(undefined1 *)(param_1 + 0xb2e) = 1;
      }
      goto LAB_0038076c;
    }
  }
  pfVar3 = (float *)func_00520FC0();
  fVar6 = *(float *)(param_1 + 8) - *pfVar3;
  fVar7 = *(float *)(param_1 + 0x10) - pfVar3[2];
  if (DAT_00380780 < (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7))) {
    *(undefined1 *)(param_1 + 0xb2e) = 0;
  }
LAB_0038076c:
  return (int)*(char *)(param_1 + 0xb2e);
}

