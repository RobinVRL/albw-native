#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern undefined4 DAT_0010a880;

// USA 0010A7BC <- EU 0010A7BC (Ghidra, non-matching)
// GLOBAL DAT_0010a880 undefined4

undefined4 func_0010A7BC(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    if (iVar2 == -2) {
      return func_0010BE9C();
    }
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        do {
          iVar2 = *param_1;
          if (iVar2 != 0) {
            ClearExclusiveLocal();
            goto LAB_0010a84c;
          }
          bVar1 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar1);
        *param_1 = -1;
LAB_0010a84c:
        if (iVar2 == 0) {
          return 0;
        }
      }
      else if (iVar2 == 1) {
        return 0;
      }
    }
    func_0010BE9C();
  } while( true );
}

