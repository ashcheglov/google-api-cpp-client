// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2016-05-04 15:59:39 UTC
//   on: 2016-05-09, 22:32:15 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Storage JSON API (storage/v1)
// Generated from:
//   Version: v1
//   Revision: 72
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_STORAGE_API_BUCKET_ACCESS_CONTROL_H_
#define  GOOGLE_STORAGE_API_BUCKET_ACCESS_CONTROL_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_storage_api {
using namespace googleapis;

/**
 * An access-control entry.
 *
 * @ingroup DataObject
 */
class BucketAccessControl : public client::JsonCppData {
 public:
  /**
   * The project team associated with the entity, if any.
   *
   * @ingroup DataObject
   */
  class BucketAccessControlProjectTeam : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static BucketAccessControlProjectTeam* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit BucketAccessControlProjectTeam(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit BucketAccessControlProjectTeam(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~BucketAccessControlProjectTeam();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_storage_api::BucketAccessControlProjectTeam</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_storage_api::BucketAccessControlProjectTeam");
    }

    /**
     * Determine if the '<code>projectNumber</code>' attribute was set.
     *
     * @return true if the '<code>projectNumber</code>' attribute was set.
     */
    bool has_project_number() const {
      return Storage().isMember("projectNumber");
    }

    /**
     * Clears the '<code>projectNumber</code>' attribute.
     */
    void clear_project_number() {
      MutableStorage()->removeMember("projectNumber");
    }


    /**
     * Get the value of the '<code>projectNumber</code>' attribute.
     */
    const StringPiece get_project_number() const {
      const Json::Value& v = Storage("projectNumber");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>projectNumber</code>' attribute.
     *
     * The project number.
     *
     * @param[in] value The new value.
     */
    void set_project_number(const StringPiece& value) {
      *MutableStorage("projectNumber") = value.data();
    }

    /**
     * Determine if the '<code>team</code>' attribute was set.
     *
     * @return true if the '<code>team</code>' attribute was set.
     */
    bool has_team() const {
      return Storage().isMember("team");
    }

    /**
     * Clears the '<code>team</code>' attribute.
     */
    void clear_team() {
      MutableStorage()->removeMember("team");
    }


    /**
     * Get the value of the '<code>team</code>' attribute.
     */
    const StringPiece get_team() const {
      const Json::Value& v = Storage("team");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>team</code>' attribute.
     *
     * The team. Can be owners, editors, or viewers.
     *
     * @param[in] value The new value.
     */
    void set_team(const StringPiece& value) {
      *MutableStorage("team") = value.data();
    }

   private:
    void operator=(const BucketAccessControlProjectTeam&);
  };  // BucketAccessControlProjectTeam
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static BucketAccessControl* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BucketAccessControl(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BucketAccessControl(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~BucketAccessControl();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_storage_api::BucketAccessControl</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_storage_api::BucketAccessControl");
  }

  /**
   * Determine if the '<code>bucket</code>' attribute was set.
   *
   * @return true if the '<code>bucket</code>' attribute was set.
   */
  bool has_bucket() const {
    return Storage().isMember("bucket");
  }

  /**
   * Clears the '<code>bucket</code>' attribute.
   */
  void clear_bucket() {
    MutableStorage()->removeMember("bucket");
  }


  /**
   * Get the value of the '<code>bucket</code>' attribute.
   */
  const StringPiece get_bucket() const {
    const Json::Value& v = Storage("bucket");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>bucket</code>' attribute.
   *
   * The name of the bucket.
   *
   * @param[in] value The new value.
   */
  void set_bucket(const StringPiece& value) {
    *MutableStorage("bucket") = value.data();
  }

  /**
   * Determine if the '<code>domain</code>' attribute was set.
   *
   * @return true if the '<code>domain</code>' attribute was set.
   */
  bool has_domain() const {
    return Storage().isMember("domain");
  }

  /**
   * Clears the '<code>domain</code>' attribute.
   */
  void clear_domain() {
    MutableStorage()->removeMember("domain");
  }


  /**
   * Get the value of the '<code>domain</code>' attribute.
   */
  const StringPiece get_domain() const {
    const Json::Value& v = Storage("domain");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>domain</code>' attribute.
   *
   * The domain associated with the entity, if any.
   *
   * @param[in] value The new value.
   */
  void set_domain(const StringPiece& value) {
    *MutableStorage("domain") = value.data();
  }

  /**
   * Determine if the '<code>email</code>' attribute was set.
   *
   * @return true if the '<code>email</code>' attribute was set.
   */
  bool has_email() const {
    return Storage().isMember("email");
  }

  /**
   * Clears the '<code>email</code>' attribute.
   */
  void clear_email() {
    MutableStorage()->removeMember("email");
  }


  /**
   * Get the value of the '<code>email</code>' attribute.
   */
  const StringPiece get_email() const {
    const Json::Value& v = Storage("email");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>email</code>' attribute.
   *
   * The email address associated with the entity, if any.
   *
   * @param[in] value The new value.
   */
  void set_email(const StringPiece& value) {
    *MutableStorage("email") = value.data();
  }

  /**
   * Determine if the '<code>entity</code>' attribute was set.
   *
   * @return true if the '<code>entity</code>' attribute was set.
   */
  bool has_entity() const {
    return Storage().isMember("entity");
  }

  /**
   * Clears the '<code>entity</code>' attribute.
   */
  void clear_entity() {
    MutableStorage()->removeMember("entity");
  }


  /**
   * Get the value of the '<code>entity</code>' attribute.
   */
  const StringPiece get_entity() const {
    const Json::Value& v = Storage("entity");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>entity</code>' attribute.
   *
   * The entity holding the permission, in one of the following forms:
   * <dl>
   * <dt>user-userId
   * <dd>user-email.
   * <dt>group-groupId
   * <dd>group-email.
   * <dt>domain-domain
   * <dd>project-team-projectId.
   * </dl>
   *
   * <dl>
   * <dt>allUsers
   * <dd>allAuthenticatedUsers Examples:.
   * <dt>user-liz@example.com.
   * <dd>The group example@googlegroups.com would be group-
   * example@googlegroups.com.
   * <dt>domain
   * <dd>example.com.
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_entity(const StringPiece& value) {
    *MutableStorage("entity") = value.data();
  }

  /**
   * Determine if the '<code>entityId</code>' attribute was set.
   *
   * @return true if the '<code>entityId</code>' attribute was set.
   */
  bool has_entity_id() const {
    return Storage().isMember("entityId");
  }

  /**
   * Clears the '<code>entityId</code>' attribute.
   */
  void clear_entity_id() {
    MutableStorage()->removeMember("entityId");
  }


  /**
   * Get the value of the '<code>entityId</code>' attribute.
   */
  const StringPiece get_entity_id() const {
    const Json::Value& v = Storage("entityId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>entityId</code>' attribute.
   *
   * The ID for the entity, if any.
   *
   * @param[in] value The new value.
   */
  void set_entity_id(const StringPiece& value) {
    *MutableStorage("entityId") = value.data();
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * HTTP 1.1 Entity tag for the access-control entry.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of the access-control entry.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * The kind of item this is. For bucket access control entries, this is always
   * storage#bucketAccessControl.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>projectTeam</code>' attribute was set.
   *
   * @return true if the '<code>projectTeam</code>' attribute was set.
   */
  bool has_project_team() const {
    return Storage().isMember("projectTeam");
  }

  /**
   * Clears the '<code>projectTeam</code>' attribute.
   */
  void clear_project_team() {
    MutableStorage()->removeMember("projectTeam");
  }


  /**
   * Get a reference to the value of the '<code>projectTeam</code>' attribute.
   */
  const BucketAccessControlProjectTeam get_project_team() const {
     const Json::Value& storage = Storage("projectTeam");
    return client::JsonValueToCppValueHelper<BucketAccessControlProjectTeam >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>projectTeam</code>'
   * property.
   *
   * The project team associated with the entity, if any.
   *
   * @return The result can be modified to change the attribute value.
   */
  BucketAccessControlProjectTeam mutable_projectTeam() {
    Json::Value* storage = MutableStorage("projectTeam");
    return client::JsonValueToMutableCppValueHelper<BucketAccessControlProjectTeam >(storage);
  }

  /**
   * Determine if the '<code>role</code>' attribute was set.
   *
   * @return true if the '<code>role</code>' attribute was set.
   */
  bool has_role() const {
    return Storage().isMember("role");
  }

  /**
   * Clears the '<code>role</code>' attribute.
   */
  void clear_role() {
    MutableStorage()->removeMember("role");
  }


  /**
   * Get the value of the '<code>role</code>' attribute.
   */
  const StringPiece get_role() const {
    const Json::Value& v = Storage("role");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>role</code>' attribute.
   *
   * The access permission for the entity. Can be READER, WRITER, or OWNER.
   *
   * @param[in] value The new value.
   */
  void set_role(const StringPiece& value) {
    *MutableStorage("role") = value.data();
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * The link to this access-control entry.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const BucketAccessControl&);
};  // BucketAccessControl
}  // namespace google_storage_api
#endif  // GOOGLE_STORAGE_API_BUCKET_ACCESS_CONTROL_H_
