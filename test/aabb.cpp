#include <gtest/gtest.h>
#include <Math/AABB.h>

TEST(AABB, HitCenter1) 
{
	Math::AABB aabb(glm::vec3(1.f), glm::vec3(3.f));
	Math::Ray ray(glm::vec3(0.f), glm::normalize(glm::vec3(1.f)));
	EXPECT_TRUE(aabb.hit(ray, 0.f, 1000.f));
}

TEST(AABB, HitCenter2)
{
	Math::AABB aabb(glm::vec3(2.f), glm::vec3(3.f));
	Math::Ray ray(glm::vec3(1.f), glm::normalize(glm::vec3(1.f)));
	EXPECT_TRUE(aabb.hit(ray, 0.f, 10.f));
}

TEST(AABB, HitRight)
{
	Math::AABB aabb(glm::vec3(1.f), glm::vec3(2.0f));
	Math::Ray ray(glm::vec3(0.f), glm::normalize(glm::vec3(2.0f, 1.f, 1.f)));
	EXPECT_TRUE(aabb.hit(ray, 0.f, 10.f));
}

TEST(AABB, PassRight)
{
	Math::AABB aabb(glm::vec3(1.f), glm::vec3(1.5f));
	Math::Ray ray(glm::vec3(0.f), glm::normalize(glm::vec3(2.0f, 1.f, 1.f)));
	EXPECT_FALSE(aabb.hit(ray, 0.f, 10.f));
}
