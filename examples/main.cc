extern "C"
{
#include <efi.h>
#include <efilib.h>
}

extern "C" EFI_STATUS efi_main(EFI_HANDLE image, EFI_SYSTEM_TABLE *systab);
EFI_STATUS
efi_main(EFI_HANDLE image, EFI_SYSTEM_TABLE *systab)
{
  EFI_STATUS efi_status = EFI_SUCCESS;

  InitializeLib(image, systab);

  Print(u"Hello World from L4Re\n");

  return efi_status;
}
