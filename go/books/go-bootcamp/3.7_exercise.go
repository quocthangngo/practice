package main

import "fmt"

type User struct {
	Id             int
	Name, Location string
}

func (u *User) Greetings() string {
	return fmt.Sprintf("Hi %s from %s", u.Name, u.Location)
}

type Player struct {
	us     *User
	GameId int
}

func main() {
	p := Player{User: &User{42, "Matt", "LA"},
		GameId: 904040,
	}
	fmt.Println(p.Greetings())
}
