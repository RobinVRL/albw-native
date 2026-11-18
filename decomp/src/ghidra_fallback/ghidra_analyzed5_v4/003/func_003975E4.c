#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern float DAT_00397808;
extern int *DAT_00397810;
extern int DAT_00397820;
extern int *DAT_00397824;
extern char s_SE_PL_DRINK_00397814[];

// GLOBAL DAT_00397808 float
// GLOBAL DAT_00397810 int *
// GLOBAL DAT_00397820 int
// GLOBAL DAT_00397824 int *
// GLOBAL s_SE_PL_DRINK_00397814 string
// USA 003975E4 <- EU 003975C0 (Ghidra, function missing from the decomp table)

undefined4 func_003975E4(void)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0x0 .. entry_sp + 0xa0 */
#define stack0x00000060 (*(undefined4 *)(albw_frame + 0x60))
  int iVar1;
  int unaff_r4;
  undefined1 unaff_r6;
  #define in_stack_00000060 (*(int *)(albw_frame + 0x60)) /* V4: frame slot (callee-filled) */
  char *in_stack_00000064;
  
  iVar1 = *(int *)(*(int *)(unaff_r4 + 0x40) + 0x14);
  if (*(float *)(iVar1 + 8) != DAT_00397808) {
    *(float *)(iVar1 + 8) = DAT_00397808;
    *(undefined1 *)(iVar1 + 0x26) = unaff_r6;
  }
  func_002B9EA4(*(int *)(unaff_r4 + 4),0x20);
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0xe);
  func_004C6C50(*DAT_00397810,0xe);
  in_stack_00000064 = s_SE_PL_DRINK_00397814;
  in_stack_00000060 = DAT_00397820;
  return func_004EABB8(*DAT_00397824,&stack0x00000060,(undefined4 *)0x0);
}

