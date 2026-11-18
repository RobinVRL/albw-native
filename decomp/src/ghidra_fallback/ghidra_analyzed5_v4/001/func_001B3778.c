// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001b394c;
extern float DAT_001b3950;
extern float DAT_001b3954;
extern int DAT_001b3958;
extern int *DAT_001b395c;
extern int DAT_001b3960;
extern float DAT_001b3964;
extern int DAT_001b3968;
extern int DAT_001b396c;

// USA 001B3778 <- EU 001B3778 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_001b394c float
// GLOBAL DAT_001b3950 float
// GLOBAL DAT_001b3954 float
// GLOBAL DAT_001b3958 int
// GLOBAL DAT_001b395c int *
// GLOBAL DAT_001b3960 int
// GLOBAL DAT_001b3964 float
// GLOBAL DAT_001b3968 int
// GLOBAL DAT_001b396c int

undefined4 func_001B3778(void)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x0 .. entry_sp + 0x60 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
#define stack0x0000000c (*(undefined4 *)(albw_frame + 0xc))
#define stack0x00000018 (*(undefined4 *)(albw_frame + 0x18))
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  int *piVar4;
  float fVar5;
  float fparam_1;
  #define in_stack_00000000 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  #define in_stack_0000000c (*(float *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  #define in_stack_00000018 (*(int *)(albw_frame + 0x18)) /* V4: frame slot (callee-filled) */
  
  fparam_1 = DAT_001b394c;
  iVar1 = func_00520FC0();
  fVar5 = *(float *)(iVar1 + 4) - *(float *)(unaff_r4 + 0x3d4);
  if ((fparam_1 <= fVar5) && (fparam_1 = fVar5, DAT_001b3950 < fVar5)) {
    fparam_1 = DAT_001b3950;
  }
  iVar1 = func_005211F4(unaff_r4,DAT_001b3954,fparam_1);
  if (iVar1 != 0) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&stack0x0000000c,pfVar2,(float *)(unaff_r4 + 0x3d0));
    in_stack_00000000 = in_stack_0000000c;
    in_stack_00000004 = in_stack_00000010;
    in_stack_00000008 = in_stack_00000014;
    in_stack_00000018 = func_0068C690(&stack0x00000000);
    in_stack_00000018 = in_stack_00000018 - *(int *)(unaff_r4 + 1000);
    uVar3 = func_0058E2B8(&stack0x00000018);
    if (uVar3 < *(uint *)(DAT_001b3958 + 8)) {
      return func_0065B158(unaff_r6,3);
    }
  }
  piVar4 = (int *)(unaff_r4 + 0x904);
  switch(*(undefined4 *)(unaff_r4 + 0x908)) {
  case 0:
    iVar1 = func_0051D2F4(piVar4,DAT_001b3968,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
    goto joined_r0x001b38e4;
  case 1:
    if (*(int *)(unaff_r4 + 0x8bc) < 0x10) {
      return 0;
    }
    iVar1 = 2;
LAB_001b38fc:
    *(int *)(unaff_r4 + 0x908) = iVar1;
    return 0;
  case 2:
    iVar1 = func_0051D2F4(piVar4,DAT_001b396c,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
joined_r0x001b38e4:
    if (iVar1 != 0) {
      *(int *)(unaff_r4 + 0x908) = *(int *)(unaff_r4 + 0x908) + 1;
      *(undefined4 *)(unaff_r4 + 0x8bc) = unaff_r7;
      return 0;
    }
    break;
  case 3:
    if (0xf < *(int *)(unaff_r4 + 0x8bc)) {
      iVar1 = 4;
      goto LAB_001b38fc;
    }
    break;
  case 4:
    iVar1 = func_0051D2F4(piVar4,0,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
    if (iVar1 != 0) {
      return func_0065B158(unaff_r6,2);
    }
  }
  return 0;
}

