#pragma once

#include <cstdint>
#include <string>
#include <vector>

enum class UserLanguage {
    RU = 1, /* Russian */
    EN = 2, /* English */
    BY = 3, /* Belarus */
    UK = 4, /* Ukrain */ /* For how long? ;) */
    PL = 5, /* Poland */
    FI = 6, /* Finland */
    GR = 7, /* Germany */
    /* More soon */
};

enum class UserGender {
    MALE = 1, /* Man */
    FEMALE = 2, /* Girl */
};

/* Small hint of the User structure
 *
 * id: std::int64_t, Unique user ID
 * tgFirstName: std::string, first_name(name) in Telegram
 * tgLastName: std::string, last_name(last name) in Telegram
 * age: std::uint16_t, user's age
 * name: std::string, user's name
 * bio: std::string, user's bio
 * country: UserCountry, user's country
 * language: UserLanguage, user's language
 * city: std::string user's city
 * gender: UserGender, user's gender
 * media: std::vector<std::string>, user's media(photo, video)
 * preferredCountries: std::vector<UserCountry>, user's preferred countries
 * preferredLanguages: std::vector<UserLanguage>, user's preferred languages
 * preferredAges: std::vector<std::uint16_t>, user's preferred ages
 * preferredCities: std::vector<std::string>, user's preferred cities
 * preferredGenders: std::vector<UserGender>, user's preferred genders
 *
 */
struct User {
    std::int64_t id;
    std::string tgFirstName;
    std::string tgLastName;
    std::uint16_t age;
    std::string name;
    std::string bio;
    UserLanguage language;
    std::string city;
    UserGender gender;
    std::vector<std::string> media;
    std::vector<UserLanguage> preferredLanguages;
    std::vector<std::uint16_t> preferredAges;
    std::vector<std::string> preferredCities;
    std::vector<UserGender> preferredGenders;
    bool hasProfile;
};
