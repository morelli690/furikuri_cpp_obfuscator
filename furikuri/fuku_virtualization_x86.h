#pragma once
class fuku_virtualization_x86 :
    public fuku_virtualizer {


public:
    fuku_virtualization_x86();
    ~fuku_virtualization_x86();

    fuku_vm_result fuku_virtualization_x86::build_bytecode(fuku_analyzed_code& code, std::vector<fuku_code_relocation>& relocation_table, uint64_t destination_virtual_address);

    std::vector<uint8_t> fuku_virtualization_x86::create_vm_jumpout(uint64_t src_address, uint64_t dst_address) const;
    std::vector<uint8_t> fuku_virtualization_x86::get_bytecode() const;

    fuku_arch fuku_virtualization_x86::get_target_arch() const;
};
