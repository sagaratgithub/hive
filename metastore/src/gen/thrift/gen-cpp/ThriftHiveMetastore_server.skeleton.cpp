// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ThriftHiveMetastore.h"
#include <protocol/TBinaryProtocol.h>
#include <server/TSimpleServer.h>
#include <transport/TServerSocket.h>
#include <transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace Apache::Hadoop::Hive;

class ThriftHiveMetastoreHandler : virtual public ThriftHiveMetastoreIf {
 public:
  ThriftHiveMetastoreHandler() {
    // Your initialization goes here
  }

  void create_database(const Database& database) {
    // Your implementation goes here
    printf("create_database\n");
  }

  void get_database(Database& _return, const std::string& name) {
    // Your implementation goes here
    printf("get_database\n");
  }

  void drop_database(const std::string& name, const bool deleteData, const bool cascade) {
    // Your implementation goes here
    printf("drop_database\n");
  }

  void get_databases(std::vector<std::string> & _return, const std::string& pattern) {
    // Your implementation goes here
    printf("get_databases\n");
  }

  void get_all_databases(std::vector<std::string> & _return) {
    // Your implementation goes here
    printf("get_all_databases\n");
  }

  void alter_database(const std::string& dbname, const Database& db) {
    // Your implementation goes here
    printf("alter_database\n");
  }

  void get_type(Type& _return, const std::string& name) {
    // Your implementation goes here
    printf("get_type\n");
  }

  bool create_type(const Type& type) {
    // Your implementation goes here
    printf("create_type\n");
  }

  bool drop_type(const std::string& type) {
    // Your implementation goes here
    printf("drop_type\n");
  }

  void get_type_all(std::map<std::string, Type> & _return, const std::string& name) {
    // Your implementation goes here
    printf("get_type_all\n");
  }

  void get_fields(std::vector<FieldSchema> & _return, const std::string& db_name, const std::string& table_name) {
    // Your implementation goes here
    printf("get_fields\n");
  }

  void get_schema(std::vector<FieldSchema> & _return, const std::string& db_name, const std::string& table_name) {
    // Your implementation goes here
    printf("get_schema\n");
  }

  void create_table(const Table& tbl) {
    // Your implementation goes here
    printf("create_table\n");
  }

  void drop_table(const std::string& dbname, const std::string& name, const bool deleteData) {
    // Your implementation goes here
    printf("drop_table\n");
  }

  void get_tables(std::vector<std::string> & _return, const std::string& db_name, const std::string& pattern) {
    // Your implementation goes here
    printf("get_tables\n");
  }

  void get_all_tables(std::vector<std::string> & _return, const std::string& db_name) {
    // Your implementation goes here
    printf("get_all_tables\n");
  }

  void get_table(Table& _return, const std::string& dbname, const std::string& tbl_name) {
    // Your implementation goes here
    printf("get_table\n");
  }

  void get_table_objects_by_name(std::vector<Table> & _return, const std::string& dbname, const std::vector<std::string> & tbl_names) {
    // Your implementation goes here
    printf("get_table_objects_by_name\n");
  }

  void get_table_names_by_filter(std::vector<std::string> & _return, const std::string& dbname, const std::string& filter, const int16_t max_tables) {
    // Your implementation goes here
    printf("get_table_names_by_filter\n");
  }

  void alter_table(const std::string& dbname, const std::string& tbl_name, const Table& new_tbl) {
    // Your implementation goes here
    printf("alter_table\n");
  }

  void add_partition(Partition& _return, const Partition& new_part) {
    // Your implementation goes here
    printf("add_partition\n");
  }

  int32_t add_partitions(const std::vector<Partition> & new_parts) {
    // Your implementation goes here
    printf("add_partitions\n");
  }

  void append_partition(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals) {
    // Your implementation goes here
    printf("append_partition\n");
  }

  void append_partition_by_name(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::string& part_name) {
    // Your implementation goes here
    printf("append_partition_by_name\n");
  }

  bool drop_partition(const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const bool deleteData) {
    // Your implementation goes here
    printf("drop_partition\n");
  }

  bool drop_partition_by_name(const std::string& db_name, const std::string& tbl_name, const std::string& part_name, const bool deleteData) {
    // Your implementation goes here
    printf("drop_partition_by_name\n");
  }

  void get_partition(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals) {
    // Your implementation goes here
    printf("get_partition\n");
  }

  void get_partition_with_auth(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const std::string& user_name, const std::vector<std::string> & group_names) {
    // Your implementation goes here
    printf("get_partition_with_auth\n");
  }

  void get_partition_by_name(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::string& part_name) {
    // Your implementation goes here
    printf("get_partition_by_name\n");
  }

  void get_partitions(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partitions\n");
  }

  void get_partitions_with_auth(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_parts, const std::string& user_name, const std::vector<std::string> & group_names) {
    // Your implementation goes here
    printf("get_partitions_with_auth\n");
  }

  void get_partition_names(std::vector<std::string> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partition_names\n");
  }

  void get_partitions_ps(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partitions_ps\n");
  }

  void get_partitions_ps_with_auth(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const int16_t max_parts, const std::string& user_name, const std::vector<std::string> & group_names) {
    // Your implementation goes here
    printf("get_partitions_ps_with_auth\n");
  }

  void get_partition_names_ps(std::vector<std::string> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partition_names_ps\n");
  }

  void get_partitions_by_filter(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const std::string& filter, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partitions_by_filter\n");
  }

  void get_partitions_by_names(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & names) {
    // Your implementation goes here
    printf("get_partitions_by_names\n");
  }

  void alter_partition(const std::string& db_name, const std::string& tbl_name, const Partition& new_part) {
    // Your implementation goes here
    printf("alter_partition\n");
  }

  void rename_partition(const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const Partition& new_part) {
    // Your implementation goes here
    printf("rename_partition\n");
  }

  void get_config_value(std::string& _return, const std::string& name, const std::string& defaultValue) {
    // Your implementation goes here
    printf("get_config_value\n");
  }

  void partition_name_to_vals(std::vector<std::string> & _return, const std::string& part_name) {
    // Your implementation goes here
    printf("partition_name_to_vals\n");
  }

  void partition_name_to_spec(std::map<std::string, std::string> & _return, const std::string& part_name) {
    // Your implementation goes here
    printf("partition_name_to_spec\n");
  }

  void markPartitionForEvent(const std::string& db_name, const std::string& tbl_name, const std::map<std::string, std::string> & part_vals, const PartitionEventType::type eventType) {
    // Your implementation goes here
    printf("markPartitionForEvent\n");
  }

  bool isPartitionMarkedForEvent(const std::string& db_name, const std::string& tbl_name, const std::map<std::string, std::string> & part_vals, const PartitionEventType::type eventType) {
    // Your implementation goes here
    printf("isPartitionMarkedForEvent\n");
  }

  void add_index(Index& _return, const Index& new_index, const Table& index_table) {
    // Your implementation goes here
    printf("add_index\n");
  }

  void alter_index(const std::string& dbname, const std::string& base_tbl_name, const std::string& idx_name, const Index& new_idx) {
    // Your implementation goes here
    printf("alter_index\n");
  }

  bool drop_index_by_name(const std::string& db_name, const std::string& tbl_name, const std::string& index_name, const bool deleteData) {
    // Your implementation goes here
    printf("drop_index_by_name\n");
  }

  void get_index_by_name(Index& _return, const std::string& db_name, const std::string& tbl_name, const std::string& index_name) {
    // Your implementation goes here
    printf("get_index_by_name\n");
  }

  void get_indexes(std::vector<Index> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_indexes) {
    // Your implementation goes here
    printf("get_indexes\n");
  }

  void get_index_names(std::vector<std::string> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_indexes) {
    // Your implementation goes here
    printf("get_index_names\n");
  }

  bool create_role(const Role& role) {
    // Your implementation goes here
    printf("create_role\n");
  }

  bool drop_role(const std::string& role_name) {
    // Your implementation goes here
    printf("drop_role\n");
  }

  void get_role_names(std::vector<std::string> & _return) {
    // Your implementation goes here
    printf("get_role_names\n");
  }

  bool grant_role(const std::string& role_name, const std::string& principal_name, const PrincipalType::type principal_type, const std::string& grantor, const PrincipalType::type grantorType, const bool grant_option) {
    // Your implementation goes here
    printf("grant_role\n");
  }

  bool revoke_role(const std::string& role_name, const std::string& principal_name, const PrincipalType::type principal_type) {
    // Your implementation goes here
    printf("revoke_role\n");
  }

  void list_roles(std::vector<Role> & _return, const std::string& principal_name, const PrincipalType::type principal_type) {
    // Your implementation goes here
    printf("list_roles\n");
  }

  void get_privilege_set(PrincipalPrivilegeSet& _return, const HiveObjectRef& hiveObject, const std::string& user_name, const std::vector<std::string> & group_names) {
    // Your implementation goes here
    printf("get_privilege_set\n");
  }

  void list_privileges(std::vector<HiveObjectPrivilege> & _return, const std::string& principal_name, const PrincipalType::type principal_type, const HiveObjectRef& hiveObject) {
    // Your implementation goes here
    printf("list_privileges\n");
  }

  bool grant_privileges(const PrivilegeBag& privileges) {
    // Your implementation goes here
    printf("grant_privileges\n");
  }

  bool revoke_privileges(const PrivilegeBag& privileges) {
    // Your implementation goes here
    printf("revoke_privileges\n");
  }

  void get_delegation_token(std::string& _return, const std::string& token_owner, const std::string& renewer_kerberos_principal_name) {
    // Your implementation goes here
    printf("get_delegation_token\n");
  }

  int64_t renew_delegation_token(const std::string& token_str_form) {
    // Your implementation goes here
    printf("renew_delegation_token\n");
  }

  void cancel_delegation_token(const std::string& token_str_form) {
    // Your implementation goes here
    printf("cancel_delegation_token\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ThriftHiveMetastoreHandler> handler(new ThriftHiveMetastoreHandler());
  shared_ptr<TProcessor> processor(new ThriftHiveMetastoreProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

