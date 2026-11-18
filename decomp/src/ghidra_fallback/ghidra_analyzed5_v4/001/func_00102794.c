#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_00102810;
extern int *DAT_00102814;
extern char *DAT_00102818;
extern undefined4 *DAT_0010281c;

// USA 00102794 <- EU 00102794 (Ghidra, non-matching)
// GLOBAL DAT_00102810 int *
// GLOBAL DAT_00102814 int *
// GLOBAL DAT_00102818 char *
// GLOBAL DAT_0010281c undefined4 *

int func_00102794(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_00102810;
  func_0010C0C0(DAT_00102810);
  piVar2 = DAT_00102814;
  if (*DAT_00102814 == 0) {
    func_00104800();
    iVar3 = func_00103CBC(DAT_00102818);
    iVar3 = func_00104868(DAT_0010281c,(undefined4 *)DAT_00102818,iVar3,0);
    if (iVar3 < 0) {
      func_0010C160(piVar1);
      return iVar3;
    }
  }
  *piVar2 = *piVar2 + 1;
  func_0010C160(piVar1);
  return 0;
}

