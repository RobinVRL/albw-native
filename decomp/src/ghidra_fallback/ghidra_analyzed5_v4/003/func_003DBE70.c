#include "ghidra_types.h"

extern int func_003DC2E4(void);
extern int func_003DC384(int param_1,int param_2,int param_3);
extern int func_003DDA44(int param_1,int param_2,ushort *param_3);
extern int DAT_003dbf18;

// USA 003DBE70 <- EU 003DBE50 (Ghidra, non-matching)
// GLOBAL DAT_003dbf18 int

void func_003DBE70(int *param_1)

{
  char cVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((ushort *)(albw_frame + 0x8))
  if ((char)param_1[3] != '\0') {
    if (*(byte *)((int)param_1 + 0xd) < 2) {
      if (*(byte *)((int)param_1 + 0xd) < 2) {
        iVar2 = 0;
        if (*param_1 != 0) {
          iVar2 = param_1[2];
        }
        if (*param_1 != 0 && iVar2 != 0) {
          local_48[1] = 0;
          local_48[0] = 1;
          cVar1 = *(char *)((int)param_1 + 0xd);
          iVar2 = func_003DC2E4();
          func_003DDA44(iVar2,(int)cVar1,local_48);
          *(undefined1 *)((int)param_1 + 0xe) = 0;
          if (*(char *)((int)param_1 + 0xe) == '\0') {
            *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)(DAT_003dbf18 + 0x19);
          }
        }
      }
      cVar1 = *(char *)((int)param_1 + 0xd);
      iVar2 = func_003DC2E4();
      func_003DC384(iVar2,1,(int)cVar1);
      *(undefined1 *)((int)param_1 + 0xd) = 0xff;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}

