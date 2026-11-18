#include "ghidra_types.h"

extern int func_00293DA0(int param_1,int param_2);
extern int func_0029450C(int param_1);
extern int func_00296190(int param_1,int param_2);
extern int func_00296BD0(int param_1,int param_2);
extern int func_00297648(int *param_1);
extern int func_002DEE24(int param_1,int param_2);
extern int func_00537F50(int param_1,byte *param_2);
extern int func_0053918C(undefined4 param_1,char *param_2);
extern int func_00540A78(int param_1,int *param_2);
extern int *DAT_004eb31c;
extern int DAT_004eb320;
extern int DAT_004eb324;

// USA 004EB254 <- EU 004EB22C (Ghidra, non-matching)
// GLOBAL DAT_004eb31c int *
// GLOBAL DAT_004eb320 int
// GLOBAL DAT_004eb324 int

void func_004EB254(int param_1,byte *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = func_00537F50(*(int *)(param_1 + 0x50),param_2);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x7e) == '\0') {
      local_14 = *(undefined4 *)(DAT_004eb324 + 0x1c);
      local_18 = DAT_004eb320;
      iVar1 = func_00540A78(*(int *)(param_1 + 0x4c),&local_18);
      if (iVar1 == 0) {
        func_00296190(*(int *)(param_1 + 0x4c),0x3c);
      }
    }
    else {
      func_00296BD0(*(int *)(param_1 + 0x4c),0x3c);
    }
    func_0029450C(*(int *)(param_1 + 0x4c));
  }
  else if ((*(char *)(*DAT_004eb31c + 0x25) != '\x03') &&
          (iVar1 = func_0053918C(*(undefined4 *)(param_1 + 0x50),(char *)param_2), iVar1 != 0)) {
    func_00293DA0(*(int *)(param_1 + 0x4c),0x3c);
  }
  func_002DEE24(*(int *)(param_1 + 0x3c),0x1e);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x84) = 0;
  func_00297648(*(int **)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x81) = 0;
  return;
}

